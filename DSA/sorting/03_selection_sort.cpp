#include <iostream>

using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void selection_sort(int arr[], int n)
{
    int k;
    for(int i=0; i< n; i++)
    {
        int mini = arr[i];
        for(int j=i; j< n; j++)
        {
            if(arr[j]<mini)
            {
                mini = arr[j];
                k =  j;
            }
        }
        swap(arr[i],arr[k]);
    }
}


int main()
{
    int arr[] = {3,4,2,1,5};
    int n = sizeof(arr)/sizeof(int);
    
    print(arr,n);
    selection_sort(arr,n);
    print(arr,n);
}