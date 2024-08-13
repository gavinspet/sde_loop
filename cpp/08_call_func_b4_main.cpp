#include <iostream>

using namespace std;

void funct() { cout << "i am a function\n"; }

class A {
public:
  A() { funct(); }
};

A obj;

int main() { cout << "i am in main\n"; }