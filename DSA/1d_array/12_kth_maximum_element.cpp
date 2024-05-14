#include "common.h"
#include <bits/stdc++.h>
using namespace std;

// method-1 : STL
int kth_max_1(vector<int> &nums, int k) {
  sort(nums.begin(), nums.end());
  return nums[nums.size() - k];
}

// method-2 : using min heap
int kth_max_2(vector<int> &nums, int k) {
  priority_queue<int, vector<int>, greater<int>> minh;

  for (int i = 0; i < k; i++) {
    minh.push(nums[i]);
  }

  for (int i = k; i < nums.size(); i++) {
    if (minh.top() < nums[i]) {
      minh.pop();
      minh.push(nums[i]);
    }
  }
  return minh.top();
}

int main() {
  vector<int> nums = {3, 2, 1, 6, 5, 4};
  int k = 3;
  ////////////////////////
  // input  3 2 1 6 5 4
  // index  0 1 2 3 4 5
  // sorted 1 2 3 4 5 6
  // output where k = 3 is: 4 index = 3
  // n = 6, k = 3 output index = (n-k)
  ////////////////////////////////////
  cout << kth_max_2(nums, k) << endl;
}