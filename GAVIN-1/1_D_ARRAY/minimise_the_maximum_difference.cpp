#include<bits/stdc++.h>
#include"common.h"
using namespace std;

// method-1: 
int solve(vector<int> nums, int k)
{
    sort(nums.begin(),nums.end());
    int maxa = INT_MIN;
    int mini = INT_MAX;
    int ans = INT_MAX;

    for(int i=0;i<nums.size();i++)
    {
        mini = min(nums[0]+k, nums[i]-k);
        maxa = max(nums[nums.size()-1]-k,nums[i]+k);

        ans = min(maxa-mini, ans);
    }

    return ans;
}

int main()
{
    vector<int> nums;
    nums.assign({4,8,12,7});
    int k;
    cout<<solve(nums,k)<<endl;
}