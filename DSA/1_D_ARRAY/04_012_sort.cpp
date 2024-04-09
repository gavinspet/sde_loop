#include<bits/stdc++.h>
#include"common.h"
using namespace std;

// method-1 : using sort STL
void sort_1(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
}


// method-2 : using count of 0,1,2s
void sort_2(vector<int> &nums)
{
    int count0, count1, count2;
    count0 = count1 = count2 = 0;

    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        count0++;
        else if(nums[i]==1)
        count1++;
        else
        count2++;
    }

    // cout<<count0<<endl;
    // cout<<count1<<endl;
    // cout<<count2<<endl;

    int i , k = 0;
    i = 0;
    while(i<count0)
    {
        nums[k++] = 0;
        i++;
    }
    i = 0;
    while(i<count1)
    {
        nums[k++] = 1;
        i++;
    }
    i = 0;
    while(i<count2)
    {
        nums[k++] = 2;
        i++;
    }
}

// Method-3 : Dutch National Flag approach 
// keeping i,j,k or low,mid,high
void sort_3(vector<int> &nums)
{
    int low = 0 , mid = 0;
    int high = nums.size()-1;

    while(mid<high)
    {
        if(nums[mid]==0)
        swap(nums[low++],nums[mid++]);
        else if(nums[mid]==1)
        mid++;
        else
        swap(nums[high--],nums[mid]);
    }
}


int main()
{
    vector<int> nums;
    nums.assign({0,1,2,0,0,1,1,0,0,2});
    sort_2(nums);
    display(nums);
}