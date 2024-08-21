#include <bits/stdc++.h>

using namespace std;

class A
{
    public:
    char a;

    virtual void f1()
    {
        cout<<"f1 \n";
    }
};

class B1: virtual public A
{
    public:
    int b1;
     void f2()
    {
        cout<<"f2 \n";
    }

     void f1() override
    {
        cout<<"over ride f1 in B1 \n";
    }
};

class B2: virtual public A
{
    public:
    int b2;

     void f3()
    {
        cout<<"f3 \n";
    }

    void f1() override
    {
        cout<<"over ride f1 in B2 \n";
    }

};

class C : public B1, public B2
{
    public:
    int c;

     void f4()
    {
        cout<<"f4 \n";
    }

    void f1() override
    {
        B1::f1();
    }
};


int main()
{
    // A objA;
    // B1 objB1;
    // B2 objB2;
    C objC;

    // cout<<"Size of object of A  is : "<<sizeof(objA)<<endl;
    // cout<<"Size of object of B1 is : "<<sizeof(objB1)<<endl;
    // cout<<"Size of object of B2 is : "<<sizeof(objB2)<<endl;
    // cout<<"Size of object of C  is : "<<sizeof(objC)<<endl;
     
    //  objA.f1();
    //  objC.f2();
    //  objC.f3();
    //  objC.f4();
     objC.f1();
}