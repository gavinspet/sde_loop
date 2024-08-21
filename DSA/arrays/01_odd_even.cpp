#include <iostream>

using namespace std;

void isOdd(int n) {
  if (n % 2 == 0)
    cout << "even\n";
  else
    cout << "odd\n";
}

int main() { isOdd(3); }