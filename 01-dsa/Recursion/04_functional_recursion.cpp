#include <iostream>

using namespace std;

// find summation of first n numbers using function return only

int func(int n) {
  if (n == 0)
    return 0;

  return (n + func(n - 1));
}
int main() { cout << func(4) << endl; }