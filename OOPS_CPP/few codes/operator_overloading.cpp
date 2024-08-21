#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overload the addition operator '+'
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overload the subtraction operator '-'
    Complex operator-(const Complex& other) {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overload the multiplication operator '*'
    Complex operator*(const Complex& other) {
        return Complex((real * other.real) - (imag * other.imag), (real * other.imag) + (imag * other.real));
    }

    // Overload the division operator '/'
    Complex operator/(const Complex& other) {
        double denominator = (other.real * other.real) + (other.imag * other.imag);
        return Complex(((real * other.real) + (imag * other.imag)) / denominator,
                       ((imag * other.real) - (real * other.imag)) / denominator);
    }

    // Overload the equality operator '=='
    bool operator==(const Complex& other) {
        return (real == other.real) && (imag == other.imag);
    }

    // Overload the inequality operator '!='
    bool operator!=(const Complex& other) {
        return !(*this == other);
    }

    // Display the complex number
    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
};

int main() {
    Complex num1(3.0, 2.0);
    Complex num2(1.0, 4.0);

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;
    Complex product = num1 * num2;
    Complex quotient = num1 / num2;

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    std::cout << "Product: ";
    product.display();

    std::cout << "Quotient: ";
    quotient.display();

    if (num1 == num2) {
        std::cout << "num1 is equal to num2." << std::endl;
    } else {
        std::cout << "num1 is not equal to num2." << std::endl;
    }

    return 0;
}
