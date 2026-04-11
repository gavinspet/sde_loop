#include <iostream>

using namespace std;

int main() {
  int a = 10;
  int *p = &a;
  int **q = &p;
  int ***r = &q;

  (*p)++;
  (**q)++;
  (***r)++;
  cout << a << endl;
}