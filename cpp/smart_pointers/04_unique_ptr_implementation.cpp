#include <iostream>

// move - yes
// copy - no
// *, -> overloaded
// raii -> initialise when constructor, destructor too

template <typename T>
class unqptr
{
private:
    T *ptr;

public:
    unqptr(T *ptr_ = nullptr) : ptr(ptr_) {}; // constructor

    ~unqptr() { delete ptr; } // destuctor

    void reset(T *ptr_) // reset
    {
        delete ptr;
        ptr = ptr_;
    }

    unqptr(unqptr const &other) = delete;            // copy constructor deleted
    unqptr &operator=(unqptr const &other) = delete; // assignment operator deleted

    unqptr(unqptr &&other) noexcept // move constructor
    {
        ptr = other.ptr;
        other.ptr = nullptr;
    }

    unqptr &operator=(unqptr &&other) noexcept
    {
        if (this != &other)
        {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
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
};