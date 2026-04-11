#include <cstring>
#include <iostream>
using namespace std;

void fun(char *str) {
  char *s = (char *)malloc(15 * sizeof(char));
  strcpy(s, "world");
  strcpy(str, s);
  cout << str << endl;
}

void funct(int **b) {
  int a = 20;
  *b = &a;
}

int main() {
  int a = 10;
  int *p = &a;
  cout << (*p) << endl;
  cout << "&p : " << &p << endl;
  funct(&p);
  cout << (*p) << endl;
}