#include <iostream>

using namespace std;

/*
Types of casting in c++
1. const cast
2. static cast
3. dynamic cast
3. reinterprete cast
*/

/*
Quick question:

What is the difference between static and const???
- static is same copy to different functions in the same value
- const is that, after initialisation it's value cannot be changed
*/

int main() {
    int a  = 10;
    const int *p = &a;
    int *q = const_cast<int*>(p);
    *q =  20;
    
    const int x = 10;
    // x = 9; error
    // x = const_cast<int>(x); //const_cast works only with pointers

    // another catch - a should have reference 
    

    // like the case below does not work
    // const int b = 30;
    // const int *p1 = &b;
    // int *q1 = const_cast<int*>(p1);
    // *q1 = 40;


}