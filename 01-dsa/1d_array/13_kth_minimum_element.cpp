#include "common.h"
#include <bits/stdc++.h>
using namespace std;

// method-1: using sort STL
int kth_min_1(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());
  return nums[k - 1];
}

// method-2: using max Heap
int kth_min_2(vector<int> &nums, int k) {
  priority_queue<int> maxh;

  for (int i = 0; i < k; i++) {
    maxh.push(nums[i]);
  }

  for (int i = k; i < nums.size(); i++) {
    if (maxh.top() > nums[i]) {
      maxh.pop();
      maxh.push(nums[i]);
    }
  }

  return maxh.top();
}

int main() {
  vector<int> nums = {3, 2, 1, 6, 5, 4};
  int k = 3;
  ////////////////////////
  // input  3 2 1 6 5 4
  // index  0 1 2 3 4 5
  // sorted 1 2 3 4 5 6
  // output where k = 3 is: 3 index = 2
  // n = 6, k = 3 output index = (k-1)
  ////////////////////////////////////
  cout << kth_min_1(nums, k) << endl;
}