#include <iostream>

using namespace std;

class A {
public:
  int x;
  explicit A(int var) { this->x = var; };
  void foo() { cout << "hey jude\n"; }
};

void foo2(A obj) { cout << endl << "print : " << obj.x; }

int main() {
  A b(2); // normal call
  // A a = 2; // implicit call
  foo2(b); // normal call
           // foo2(30); // implicit call

  // since A (int var) has int as param and A a = 2 also takes int
  // compiler implicitly calls the contructor
  // to stop this we can make the contructor as explicit
}