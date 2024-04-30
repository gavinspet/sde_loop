#include <iostream>

using namespace std;

int sum(int a, int b) {
  return a + b;
}

int prod(int a, int b) {
  return a * b;
}

int difference(int a, int b) {
  return a - b;
}


int main()
{
    int a = 3, b = 2;

    cout<<"Enter 0 for sum, 1 for prod, 2 for diff\n";
    int x;
    int (*p[3])(int,int);
    p[0] = &sum;
    p[1] = &prod;
    p[2] = &difference;
    while(1)
    {
      cin>>x;
      if(x>2 || x<0)
      {
        cout<<"wrong input\n";
        continue;
      }
      cout<<p[x](a,b);
    }


}