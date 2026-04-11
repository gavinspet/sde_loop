#include <iostream>

using namespace std;

void funct(int a, int b, int *sum, int *subs, int *prod) {
  *sum = a + b;
  *subs = a - b;
  *prod = a * b;
}

int main() {
  int a = 4;
  int b = 3;
  int sum, subs, prod;
  funct(4, 3, &sum, &subs, &prod);

  cout << "sum = " << sum << endl;
  cout << "diff = " << subs << endl;
  cout << "prod = " << prod << endl;
}