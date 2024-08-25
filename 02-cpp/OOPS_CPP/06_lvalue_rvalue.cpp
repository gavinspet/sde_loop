#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <thread>
#include <unistd.h>

using namespace std;

/*
In C++, lvalues and rvalues are fundamental concepts related
to the classification of expressions based on their ability to a
ppear on the left-hand side (LHS) or right-hand side (RHS) of an assignment
operator (=). Understanding these distinctions is crucial for grasping the
nuances of C++ semantics and how expressions behave.

Lvalues:

An lvalue (locator value) refers to an object that occupies
some identifiable location in memory (i.e., it has an address).
Lvalues can be used as the target of an assignment operation,
 meaning they can appear on the left-hand side of an assignment.
Examples of lvalues include variables, dereferenced pointers, and objects with
names.


Rvalues:

An rvalue, on the other hand, is any value that can be assigned
to an lvalue but cannot have an address directly associated with it.
Rvalues are often temporary and may not persist beyond the expression in which
they appear. Rvalues cannot appear on the left-hand side of an assignment.
Examples of rvalues include literal values (like 5 or "hello"),
the result of an arithmetic operation (2 + 3), or the result of a
function call that returns by value.
*/

// int foo(int &b)
// {
//     int &a=b;
//     return a;
// }

// int foo2(const int &b)
// {
//     int &a=b;
//     return a;
// }

int main() {
  int x = 5; // 'x' is an lvalue, 5 is an rvalue
  int y =
      x; // 'x' is an lvalue, 'y' is an lvalue, 'x' is an rvalue in this context

  int z = x + y; // 'x + y' is an rvalue
  //   x+y = x; not okay since expression must be a modifiable lvalue

  // in c++ we have lvalue reference and we can put lvalue to lvalue reference
  // but not rvalue directly

  int a = 20;
  //    int &b = 10; no
  int &b = a; // ok
  /*
  Here, b is a reference to an integer (int &).
  It's initialized to a, which means b is an alias for a.
  Changes made to b will affect a, and vice versa.
  */
  // we can bind rvalue to const lvalue reference
  const int &c = 10;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  a = 30;

  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
  cout << "c = " << c << endl;

  // the same is true for functions as well
}