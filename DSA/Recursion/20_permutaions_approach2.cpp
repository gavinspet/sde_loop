#include <bits/stdc++.h>

using namespace std;


void printArray(vector<int> nums)
{
    cout<<"{";
    for(int i=0;i<nums.size();i++)
    {
        if(i!=nums.size()-1)
        cout<<nums[i]<<",";
        else
        cout<<nums[i];
    }
    cout<<"}"<<endl;
}

void solve(int index, vector<int> nums)
{
    if(index ==nums.size())
    {
        printArray(nums);
        return;
    }

    for(int i= index;i<nums.size();i++)
    {
      swap(nums[i],nums[index]);
      solve(index+1, nums);
      swap(nums[i],nums[index]);
    }
}

int main()
{
    vector<int> nums = {1,2,3};
    solve(0,nums);
}