#include<iostream>
using namespace std;



int main()
{
    int a = 5; int b = 10;
    const int *p1 = &a; // or int const* p1;
    int * const p2 = &b;


    // *p1 = 2; error 
    *p2 = 3;
    
    p1 = &b;
    // p2 = &a; error

}