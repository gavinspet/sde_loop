#include<iostream>
using namespace std;

double myPow(double x, int n) {
        if(n==0) return 1;
        if(n==1) return x;
        if(n==-1) return (1/x);
        
        // if odd, then boil down to even
         if(n%2) return x*myPow(x,n-1);
         return myPow(x*x,n/2);
    }

int main()
{
  cout<<myPow(2.0,32);
  return 0;
}