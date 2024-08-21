#include <iostream>

using namespace std;

/*
A pointer is a variable that stores the memory address of another variable. 
It "points" to the location in memory where a value is stored rather than holding 
the actual value itself.
*/

int main()
{
    // pointer declaration
    int* ptr; // declared a pointer to an integer
    char* ptr1; // declared a pointer to a char

    /* Size of pointer:
    For a 32-bit system, the size of a pointer is usually 4 bytes.
    For a 64-bit system, the size of a pointer is usually 8 bytes.
    */
    
    cout<<"Size of a pointer : "<<sizeof(ptr)<<endl;
    // cout<<sizeof(ptr1)<<endl;

    int num = 5;
    char abc = 'a';
    ptr = &num;
    ptr1 = &abc;

    cout<<"ptr : "<<ptr<<endl;
    cout<<"ptr1 : "<<static_cast<void*>(ptr1)<<endl;


    // Deference operator: * is used to access the value stored at ptr
    cout<<"ptr val : "<<*ptr<<endl;
    cout<<"ptr1 val : "<<*ptr1<<endl;


    // types of pointers:

    // 1. Null pointers - Null Pointer: A pointer that doesn't point to any 
    // valid memory address. It's often used to indicate that a pointer doesn't 
    // refer to a valid object.
    int *ptr2 = NULL;

    // 2. void pointers - generic pointers, can hold any value
    void *genericPtr;
    int nu = 42;
    genericPtr = &nu;

    // 3. pointers to pointers
    int num1 = 4;
    int *p1 = &num1;
    int **p2 = &p1; // p2 is a pointer to pointer

    // accessing value at p2
    
    cout<<"p2 value : "<<**p2<<endl; 


    // Dangling pointer
    // int a = 7;
    // int *ptra = &a;
    // delete(ptra);   // freeing the memory
    // cout<<ptra<<endl;


    // int* createAndReturnPointer() {
    // int num = 42;
    // int* ptr = &num;
    // return ptr; // ptr becomes a dangling pointer when the function exits
}


