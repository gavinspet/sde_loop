#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Base class constructor" << std::endl;
    }

    // Virtual destructor in the base class
    virtual ~Base() {
        std::cout << "Base class destructor" << std::endl;
    }

    virtual void someFunction() {
        std::cout << "Base class someFunction" << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived class constructor" << std::endl;
    }

    ~Derived() override {
        std::cout << "Derived class destructor" << std::endl;
    }

    void someFunction() override {
        std::cout << "Derived class someFunction" << std::endl;
    }
};

int main() {
    Base* ptr = new Derived; // Create a derived class object via a base class pointer

    ptr->someFunction(); // Calls the derived class function due to polymorphism

    delete ptr; // Calls the derived class destructor via the virtual destructor

    return 0;
}
