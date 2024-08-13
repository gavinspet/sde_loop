#include <iostream>

using namespace std;

class Base {
  int a;

public:
  Base() { cout << "Base constructor ..\n"; }

  virtual void fun() { cout << "Base fun\n"; }
  ~Base() { cout << "Base Destructor ..\n"; }
};

class Derived : public Base {
  int b;

public:
  Derived() { cout << "Derived constructor ..\n"; }

  void fun() override { cout << "Derived fun\n"; }

  ~Derived() { cout << "Derived Destructor ..\n"; }
};

int main() {
  Base *bp = new Derived();

  delete bp;
}