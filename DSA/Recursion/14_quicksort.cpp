#include <bits/stdc++.h>

using namespace std;


/* quicksort algorithm:
1. pick a pivot element (any)
2. put it in its right position (smaller on left, greater on right)
3. repeat for left and right partition
*/

// utility function - print array
void printArray(vector<int> vec) {
  int n = vec.size();

  for (int i = 0; i < n; i++) {
    cout << vec[i] << " ";
    if (i == n - 1)
      cout << endl;
  }
}

int partition(vector<int> &nums, int low, int high)
{
    int pivot =  nums[low];

    int i = low;
    int j = high;

    while(i<j)
    {
        while(nums[i]<= pivot && i<=high-1) // element just greater than pivot
        {
            i++;
        }

        while(nums[j]> pivot && j>=low +1 ) // element just lesser than pivot
        {
            j--;
        }

        if(i<j) swap(nums[i],nums[j]);
        
    }
    swap(nums[low],nums[j]);
    return j;
}


void quicksort(vector<int> &nums, int low, int high)
{
    if(low < high)
    {
        int partition_index = partition(nums,low,high);
        quicksort(nums,low,partition_index-1);
        quicksort(nums,partition_index+1,high);
    }
    return;
}

int main()
{
    vector<int> nums = {4,6,2,5,7,9,1,3};
    int low = 0;
    int high = nums.size()-1;
    printArray(nums);
    cout<<"quick sort : ";
    quicksort(nums,low,high);
    printArray(nums);
}