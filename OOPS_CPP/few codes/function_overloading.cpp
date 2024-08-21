#include<iostream>

using namespace std;

template <typename T>
T sum(T a) 
{
    return (a);
};

// variadic function for variadic function overloading
template <typename T, typename... Args>
T sum (T a, Args... args)
{
    return (a+ sum(args...));
}




int main()
{

    cout<<sum(1,2)<<endl;
    cout<<sum(1.0, 2.9, 3.9)<<endl;

}