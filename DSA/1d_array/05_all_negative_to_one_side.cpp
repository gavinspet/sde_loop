#include<bits/stdc++.h>
using namespace std;

// method -1 : sort simply Time- O(n*logn)
void move_negatives_1(vector<int> &nums)
{
    sort(nums.begin(),nums.end());
}

// method- 2 : Dutch National Flag way
void move_negatives_2(vector<int> &nums)
{
    int i = 0;
    int j = 0;

    while(j<nums.size())
    {
        if(nums[j]<0)
        swap(nums[i++],nums[j++]);
        else
        j++;
    }
}
int main()
{
    vector<int> nums;
    nums.assign({3,-4,5,5,-9,0,-1,2,2,-2});
    move_negatives_2(nums);
}