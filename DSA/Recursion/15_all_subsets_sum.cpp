#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> nums, vector<int> &output, int index, int sum)
{
    if(index == nums.size())
    {
        output.push_back(sum);
        cout<<sum<<" ";
        return;
    }

    // pick
    solve(nums,output,index+1,sum+ nums[index]);

    // not pick
    solve(nums,output,index+1,sum);
}


int main()
{
    // Input : arr[] = {2, 3}
    // Output: 0 2 3 5

    // Input : arr[] = {2, 4, 5}
    // Output : 0 2 4 5 6 7 9 11
    vector<int> nums = {2,3};
    vector<int> output;
    solve(nums,output, 0, 0);
}