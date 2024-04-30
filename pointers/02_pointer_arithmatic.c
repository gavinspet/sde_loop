#include <stdio.h>

int main() {
    int a = 10;
    int *p = &a;
    

    printf("&a = %p\n",&a); // adress of a 
    printf("p = %p\n",p);  // adress of a that's stored in a
    printf("p+1 = %p\n",p+1); // adress of a+sizeof(pointer)
    printf("*p = %d\n",*p); // dereferencing p
    printf("*(p+1) = %d\n",*(p+1)); // dereferencing p+1

}
