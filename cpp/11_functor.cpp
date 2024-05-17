#include <iostream>

using namespace std;

class A
{
    int a;
    public:
    void foo()
    {
        cout<<"foo ..\n";
    }

    void operator()()
    {
        cout<<"functor hoon mai ..\n";
    }
};

int main()
{
    A a;
    a();
}