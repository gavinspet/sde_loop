#include <iostream>

using namespace std;

class Base {
  int a;
};

class Derived : public Base {
  int b;
};

int main() {
  // int to float - chota se badha - upcast
  // bytes will be lost
  float b = 3.13;
  int x = 9.2;
  int a = b;
  // cout<<x<<endl;
  // cout<<a<<endl;

  // float to int - badha se chota - downcast
  int c = 3;
  float y = 3;
  float z = c;

  cout << sizeof(Base) << endl;    // 4
  cout << sizeof(Derived) << endl; // 8

  // derived to base - upcast since base is up
  Derived d1;
  Base *bp1 = &d1;

  //    derived to base - downcast
  // Base b1;
  // Derived *dp1 = &b1;
}