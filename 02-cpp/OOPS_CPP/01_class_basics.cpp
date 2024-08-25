#include <cstring>
#include <iostream>
using namespace std;

class A {
public:
  int a;

  void func() { cout << "a :" << this->a << endl; }
};

int main() {
  A obj;
  obj.a = 10;

  // obj.func();
  cout << &A << endl;
}