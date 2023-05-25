#include<bits/stdc++.h>
 #include "common.h"
void display(std::vector<int>& nums)
{
    // std::cout<<std::endl;
    for(int i=0;i<nums.size();i++)
    {
        std::cout<<nums[i]<<" ";
    }
    std::cout<<std::endl;
}

void displayArray(int nums[], int n)
{
    for(int i=0;i<n;i++)
    {
        std::cout<<nums[i]<<" ";
    }
    std::cout<<std::endl;   
}