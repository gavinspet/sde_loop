#include <bits/stdc++.h>

using namespace std;


void print(int arr[], int n)
{
    for(int i = 0 ; i< n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

void reverse(int arr[], int n)
{
    int i =0;
    int j = n-1;

    while(i<=j)
    {
        swap(arr[i++],arr[j--]);
    }
}

int main()
{

    int arr[] = {1, 2, 3, 9, -1, 3, 2, 21, -9, 0, 0};
    int n = sizeof(arr) / sizeof(int);

    print(arr,n);
    reverse(arr,n);
    print(arr,n);
}