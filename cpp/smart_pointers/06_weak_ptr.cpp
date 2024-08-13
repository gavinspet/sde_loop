#include <iostream>

template <typename T>
class shrdptr;

template <typename T>
class weakptr
{
private:
    T *ptr;
    unsigned *ref_count;

public:
    weakptr() : ptr(nullptr), ref_count(nullptr) {} // default constructor

    weakptr(const shrdptr<T> &shared) // constructor from shrdptr
    {
        ptr = shared.ptr;
        ref_count = shared.ref_count;
    }

    weakptr(const weakptr &other) // copy constructor
    {
        ptr = other.ptr;
        ref_count = other.ref_count;
    }

    weakptr &operator=(const weakptr &other) // copy assignment operator
    {
        if (this != &other)
        {
            ptr = other.ptr;
            ref_count = other.ref_count;
        }
        return *this;
    }

    weakptr(weakptr &&other) noexcept // move constructor
    {
        ptr = other.ptr;
        ref_count = other.ref_count;
        other.ptr = nullptr;
        other.ref_count = nullptr;
    }

    weakptr &operator=(weakptr &&other) noexcept // move assignment operator
    {
        if (this != &other)
        {
            ptr = other.ptr;
            ref_count = other.ref_count;
            other.ptr = nullptr;
            other.ref_count = nullptr;
        }
        return *this;
    }

    bool expired() const // check if the shared object is still valid
    {
        return ref_count == nullptr || *ref_count == 0;
    }

    shrdptr<T> lock() const // create a shrdptr if the shared object is still valid
    {
        if (expired())
        {
            return shrdptr<T>();
        }
        return shrdptr<T>(*this);
    }
};

template <typename T>
class shrdptr
{
private:
    T *ptr;
    unsigned *ref_count;

public:
    shrdptr(T *ptr_ = nullptr) : ptr(ptr_), ref_count(new unsigned(1)) {} // constructor

    ~shrdptr() // destructor
    {
        release();
    }

    shrdptr(const shrdptr &other) // copy constructor
    {
        ptr = other.ptr;
        ref_count = other.ref_count;
        ++(*ref_count);
    }

    shrdptr &operator=(const shrdptr &other) // copy assignment operator
    {
        if (this != &other)
        {
            release();
            ptr = other.ptr;
            ref_count = other.ref_count;
            ++(*ref_count);
        }
        return *this;
    }

    shrdptr(shrdptr &&other) noexcept // move constructor
    {
        ptr = other.ptr;
        ref_count = other.ref_count;
        other.ptr = nullptr;
        other.ref_count = nullptr;
    }

    shrdptr &operator=(shrdptr &&other) noexcept // move assignment operator
    {
        if (this != &other)
        {
            release();
            ptr = other.ptr;
            ref_count = other.ref_count;
            other.ptr = nullptr;
            other.ref_count = nullptr;
        }
        return *this;
    }

    T *operator->() const
    {
        return ptr;
    }

    T &operator*() const
    {
        return *ptr;
    }

    unsigned use_count() const // return the reference count
    {
        return *ref_count;
    }

private:
    void release()
    {
        if (ref_count && --(*ref_count) == 0)
        {
            delete ptr;
            delete ref_count;
        }
    }

    // Allow weakptr to access private members
    friend class weakptr<T>;
};

// Example usage
int main()
{
    shrdptr<int> p1(new int(10));
    weakptr<int> wp1 = p1;

    std::cout << "p1 use count: " << p1.use_count() << std::endl; // Output: p1 use count: 1
    std::cout << "wp1 expired: " << wp1.expired() << std::endl; // Output: wp1 expired: 0 (false)

    if (auto sp = wp1.lock())
    {
        std::cout << "Locked weak pointer: " << *sp << std::endl; // Output: 10
    }

    p1 = nullptr;
    std::cout << "p1 use count after reset: " << p1.use_count() << std::endl; // Output: 0
    std::cout << "wp1 expired: " << wp1.expired() << std::endl; // Output: 1 (true)

    if (auto sp = wp1.lock())
    {
        std::cout << "Locked weak pointer: " << *sp << std::endl;
    }
    else
    {
        std::cout << "weak pointer expired" << std::endl; // Output: weak pointer expired
    }

    return 0;
}
