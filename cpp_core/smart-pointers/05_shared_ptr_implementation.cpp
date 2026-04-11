#include <iostream>

template <typename T> class shrdptr {
private:
  T *ptr;
  unsigned *ref_count;

public:
  shrdptr(T *ptr_ = nullptr)
      : ptr(ptr_), ref_count(new unsigned(1)) {} // constructor

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
    if (this != &other) {
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
    if (this != &other) {
      release();
      ptr = other.ptr;
      ref_count = other.ref_count;
      other.ptr = nullptr;
      other.ref_count = nullptr;
    }
    return *this;
  }

  T *operator->() const { return ptr; }

  T &operator*() const { return *ptr; }

  unsigned use_count() const // return the reference count
  {
    return *ref_count;
  }

private:
  void release() {
    if (--(*ref_count) == 0) {
      delete ptr;
      delete ref_count;
    }
  }
};

int main() {
  shrdptr<int> p1(new int(5));
  std::cout << "p1 use count: " << p1.use_count()
            << std::endl; // Output: p1 use count: 1

  {
    shrdptr<int> p2 = p1;
    std::cout << "p1 use count: " << p1.use_count()
              << std::endl; // Output: p1 use count: 2
    std::cout << "p2 use count: " << p2.use_count()
              << std::endl; // Output: p2 use count: 2
  }

  std::cout << "p1 use count: " << p1.use_count()
            << std::endl; // Output: p1 use count: 1

  return 0;
}
