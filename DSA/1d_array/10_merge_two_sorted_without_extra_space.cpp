#include<bits/stdc++.h>
#include"common.h"
using namespace std;

// the intuition is that last element of first array will go to second array only
void merge(int nums1[],int m, int nums2[], int n)
{
    int i = 0;
    int k = m-1;
    int j;

    while(i<=k && j<m)
    {
        if(nums1[i]<nums2[j])
        {
            i++;
        }
        else
        {
            swap(nums1[k--],nums2[j++]);
        }
    }
    sort(nums1,nums1+m);
    sort(nums2,nums2+n);
}

int main()
{
    int nums1[] = {1,5,9,10,15,20};
    int m = 6;
    int nums2[] = {2,3,8,13};
    int n = 4;

    merge(nums1,m,nums2,n);

    displayArray(nums1,m);
    displayArray(nums2,n);
}