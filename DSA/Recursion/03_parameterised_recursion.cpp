#include <iostream>

using namespace std;

// find summation of first n numbers using paramters only

void func(int n, int sum) {
  if (n == 0) {
    cout << sum << endl;
    return;
  }

  func(n - 1, sum + n);
}
int main() { func(4, 0); }