#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int value) : data(value) {
        std::cout << "Constructor called with value: " << value << std::endl;
    }

    void print() {
        std::cout << "Data: " << data << std::endl;
    }

private:
    int data;
};

int main() {
    // Creating a unique_ptr to a dynamically allocated object
    std::unique_ptr<MyClass> uniquePtr = std::make_unique<MyClass>(42);

    // Accessing the object and its member function
    uniquePtr->print();

    // uniquePtr automatically deletes the object when it goes out of scope
    return 0; // Object is automatically deleted here
}
