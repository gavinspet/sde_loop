#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {
  if (n == 0 || n == 1)
    return false;

  int i = sqrt(n);
  while (i > 1) {
    if (n % i == 0) {
      return false;
    }
    i--;
  }
  return true;
}

int main() {
  if (isPrime(19)) {
    cout << "prime\n";
  } else {
    cout << "not prime\n";
  }
}