#include <cstring>
#include <iostream>
using namespace std;

class A {
  int x;

public:
  A(int val) : x{val} {}
};

class B : public A {

public:
  B() : A(0) {}
};

int main() {
  B b;
  return 0;
}