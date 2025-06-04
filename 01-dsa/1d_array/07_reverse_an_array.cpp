#include <bits/stdc++.h>
using namespace std;

void display(vector<int> nums)
{
  for(int i=0; i<nums.size();i++)
  {
    if(i != nums.size()-1)
    {
      cout<<nums[i]<<" ";
    }
    else
    {
      cout<<nums[i]<<endl; 
    }
  }
}

int main() {
  vector<int> nums;
  nums.assign({0, 1, 2, 3, 4, 5, 6});
  int n = 7;
  display(nums);
  int begin_index = 1;
  int reverse_span = 4;
  reverse(nums.begin() + begin_index, nums.begin() + reverse_span);
  display(nums);
}