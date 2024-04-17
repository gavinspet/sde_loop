#include<bits/stdc++.h>
#include"common.h"
using namespace std;

// method-1: sort and find adjacent consecutive
int find_duplicate_1(vector<int> nums)
{
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]==nums[i-1])
        return nums[i];
    }
    return -1;
}


// method-2: floyd algorithm 
// hare and tortoroise algorithm
int find_duplicate_2(vector<int> nums)
{
    int slow = 0;
    int fast = 0;
    while(true)
    {
        slow = nums[slow];
        fast = nums[nums[fast]];

        if(fast == slow)
        break;
    }

    fast = 0;

    while(true)
    {
        slow = nums[slow];
        fast = nums[fast];

        if(slow == fast)
        return slow;
    }


    return -1;
}

// method-3: using a map
int find_duplicate_3(vector<int> nums)
{
    unordered_map<int,int> mp;

    for(int i=0;i<nums.size();i++)
    {
        if(mp[nums[i]]==0)
        {
            mp[nums[i]]++;
        }
        else
        return nums[i];
    }

    return -1;
}

int main()
{
    vector<int> nums = {1,3,4,2,2};
    cout<<find_duplicate_2(nums)<<endl;
}