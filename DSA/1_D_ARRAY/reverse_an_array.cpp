#include<bits/stdc++.h>
#include"common.h"
using namespace std;

int main()
{
    vector<int> nums;
    nums.assign({0,1,2,3,4,5,6});
    int n = 7;
    display(nums);
    reverse(nums.begin()+1,nums.begin()+4);
    display(nums);

}