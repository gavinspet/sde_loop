#include <iostream>
using namespace std;

int main() {
  int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int(*p)[3] = b;

  // int *l [3];

  cout << "size of *p = " << sizeof(*p) << endl;
  // cout<<"size of *l = "<<sizeof(*l)<<endl;

  cout << "b = " << b << endl;
  cout << "*b = " << *b << endl;
  cout << "**b = " << **b << endl;
  cout << "&b = " << &b << endl;
  cout << "&b+1 = " << &b + 1 << endl;

  cout << "*b+1 = " << *b + 1 << endl;
  cout << "*(b+1) = " << *(b + 1) << endl;
}