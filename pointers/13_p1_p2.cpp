#include<iostream>
#include<cstring>
using namespace std;

/*
 p1+p2 has no meaning
 p1-p2 tells the number of elements in between them in the same array
 p1-p2 has no meaning unless they are pointing in the same array
 Note: Subtracting pointers only makes sense when they point to elements 
 of the same array (or just after the end of it). 
 Subtracting pointers pointing to different objects or types yields undefined behavior.
*/

int main()
{
    int a = 2, b = 3;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;

    // p3 = p1+p2; // error

   cout<<"p1 = "<<p1<<endl;
   cout<<"p2 = "<<p2<<endl;

   cout<<"p2-p1 = "<<(p2-p1)<<endl;
}