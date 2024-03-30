#include <iostream>

using namespace std;

// fibonacii number
// 0 1 1 2 3 5 8 3 .. fib[i]
// 0 1 2 3 4 5 6 7 .. i
// f(n) = f(n-1) + f(n-2)

int fib(int n)
{
    if(n<=1)
    return n;

    return fib(n-1)+ fib(n-2);
}

int main()
{
    int n;
    n = 6;
    cout<<fib(n)<<endl;
}

// T : O(2^n)


//recursion tree
/*

                   fib(6)
              /             \
        fib(5)           fib(4)
      /       \         /       \
   fib(4)    fib(3)   fib(3)    fib(2)
  /     \    /     \  /     \   /     \
fib(3) fib(2) fib(2) fib(1) fib(2) fib(1)
 /   \
fib(2) fib(1)

fib(0) and fib(1) are leaf nodes with value 0 and 1 respectively

nb: should use dp for it
                  
*/