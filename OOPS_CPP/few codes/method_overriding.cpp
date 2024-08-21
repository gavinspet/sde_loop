#include <iostream>

using namespace std;


class A
{
    public:

    virtual void hey() = 0;
    // {
    //     cout<<"hey"<<endl;
    // } 
};

class B : public A
{
    public:

    void hey()
    {
        cout<<"hey jude"<<endl;
    }

    void hello()
    {
        cout<<"Hello "<<endl;
    }
};

int main()
{
    // A a;
    B b;
    // a.hey();
    b.hey();
    b.hello();
}