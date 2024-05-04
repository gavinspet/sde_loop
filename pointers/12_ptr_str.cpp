#include<iostream>
#include<cstring>
using namespace std;

void fun(char* str)
{
    char* s = (char*)malloc(15*sizeof(char));
    strcpy(s, "world");
    strcpy(str,s);
    cout<<str<<endl;
}

int main()
{
    char str[] = "hello";;
    // strcpy(str, "world");
    fun(str);
    cout<<str<<endl;
}