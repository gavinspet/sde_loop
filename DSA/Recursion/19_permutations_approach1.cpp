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

void solve(vector<int> nums, vector<int> &output, vector<int> &freq)
{
    if(output.size()==nums.size())
    {
        printArray(output);
        return;
    }

    for(int i=0;i<nums.size();i++)
    {
        if(freq[i]==0)
        {
            output.push_back(nums[i]);
            freq[i] = 1;
            solve(nums,output,freq);
            freq[i] = 0;
            output.pop_back();
        }
    }
}

int main()
{
    vector<int> nums = {1,2,3};
    vector<int> output;
    vector<int> freq(nums.size(),0);
    solve(nums,output,freq);
}