#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <thread>
#include <unistd.h>

using namespace std;

// lvalue ref
void foo(int &b) { cout << "lvalue ref" << endl; }

// const lvalue ref
void foo(const int &b) { cout << "const lvalue ref" << endl; }

// rvalue ref
void foo(int &&b) { cout << "rvalue ref" << endl; }

int main() {
  int a = 2;
  foo(a);
  foo(10);
  foo(move(a));

  // rvalue reference
  // 1. bind only to rvalues
  // 2. represented with &&
  // 3. an exp is rvalue if it results only in temporary object

  int &&x =
      10; // 'x' is an rvalue reference to a temporary integer with value 10

  // Move 'x' to another variable 'y'
  int y = std::move(x); // After this, 'x' is in a valid but unspecified state

  // Now 'x' cannot be used, as its contents have been moved to 'y'
}