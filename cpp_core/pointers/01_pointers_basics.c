#include <stdio.h>

int main()
{
    int a = 5; // value of a is 5
    int *p;    // pointer of int type
    p = &a;    // assign address of a to p

    printf("a = %d\n", a);   // value of a
    printf("p = %p\n", p);   // value stored at the address pointed to by p
    printf("&a = %p\n", &a); // address of a
    printf("&p = %p\n", &p); // address of p

    *p = 8;                // dereferencing p (modifying the value at the address pointed to by p)
    printf("a = %d\n", a); // value of a (now 8)
}
