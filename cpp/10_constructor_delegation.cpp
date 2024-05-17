#include <iostream>

using namespace std;

class A
{
    int x;
    int y;
    public:
    // default constructor
    A() : A(0,0)
    {
        cout<<"defauult ..\n";
    };
    
    // parameterised constructor
    A(int _x, int _y) : x(_x),y(_y)
    {
        cout<<"param.. \n";
    };
};

int main()
{
    A obj;
}