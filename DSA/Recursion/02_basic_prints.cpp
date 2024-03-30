#include <iostream>

using namespace std;

void print_name(int i, int n)
{
    if(i>n)
    return;

    cout<<"Kartick\n";

    print_name(i+1,n);

}

void print_1toN(int i, int n)
{
    if(i>n)
    return;

    cout<<i<<endl;

    print_1toN(i+1,n);
}

void print_Nto1(int i, int n)
{
    if(i<=0)
    return;

    cout<<i<<endl;

    print_Nto1(i-1,n);

}

void print_1toN_BT(int i, int n)
{
    if(i<=0)
    return;

    print_1toN_BT(i-1,n);
    cout<<i<<endl;
}

void print_Nto1_BT(int i, int n)
{
    if(i>n)
    return;

    print_Nto1_BT(i+1,n);
    cout<<i<<endl;
}
int main()
{
    cout<<"Enter the value of n\n";

    int n;
    cin>>n;

    // print_name(1,n);
    // print_1toN(1,n);
    // print_Nto1(n,n);
    // print_1toN_BT(n,n);
    print_Nto1_BT(1,n);

}