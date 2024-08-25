#include <iostream>
using namespace std;

int sum(int a, int b) { return a + b; }

int diff(int a, int b) { return a - b; }

int main() {
  int (*funcs[2])(int, int); // Array of function pointers
  funcs[0] = &sum;
  funcs[1] = &diff;

  int c = funcs[0](3, 2); // Call the function at index 0

  cout << "sum : " << c << endl;
  cout << "&funcs[0] : " << &funcs[0] << endl;
  cout << "&funcs[1] : " << &funcs[1] << endl;
}
