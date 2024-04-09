#include<bits/stdc++.h>
using namespace std;


// method-1 : STL
void reverse_1(vector<int> &nums)
{
    reverse(nums.begin(),nums.end());
}

// method-2 : two pointers
void reverse_2(vector<int> &nums)
{
    int i = 0, j = nums.size()-1;

    while(i<j)
    {
        /// swap -1 : STL ................................1
        //////////////////
        // swap(nums[i],nums[j]);
        //////////////////
        //////////////////
        // swap - 2 : using third variable ................2
        // int temp = nums[i];
        // nums[i] = nums[j];
        // nums[j] = temp;
        ///////////////////
        ////////////////////
        // swap - 3 : without using third variable or STL ..3
        nums[i] = nums[i] + nums[j];
        nums[j] = nums[i] - nums[j];
        nums[i] = nums[i] - nums[j];
        ////////////////////////////
        i++;
        j--;
    }
}

int main()
{
    vector<int> nums;
    nums.assign({1,2,3,4,5});
    cout<<"code for reversing array :"<<endl;
    cout<<"Input: ";
    // display(nums);
    // function call here
    /////////////////////////
    // reverse_1(nums);
    reverse_2(nums);
    /////////////////////////////
    /////////////////////////////
    cout<<"Output: ";
    // display(nums);
}