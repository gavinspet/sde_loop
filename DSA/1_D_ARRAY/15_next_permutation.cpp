#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> nums)
{
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}

void next_perm(vector<int>& nums)
{
    // 1 2 3 6 5 4 
    int n = nums.size();
    int i,j;
    for( i= n-2; i >=0 ; i--)
    {
        if(nums[i]<nums[i+1])
        {
            break;
        }
    }
    if(i<0)
    {
        reverse(nums.begin(),nums.end());
        return;
    }

    cout<<"nums[i] = "<<nums[i]<<endl;

    for(j= n-1; j >=0 ; j--)
    {
        if(nums[j]>nums[i])
        break;
    }
    swap(nums[i],nums[j]);

    sort(nums.begin()+i+1, nums.end());

    return;
}

int main()
{
    vector<int> nums = {1,2,3,6,5,4};
    printArray(nums);
    next_perm(nums);
    printArray(nums);
}