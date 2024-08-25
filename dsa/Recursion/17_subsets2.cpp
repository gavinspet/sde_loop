#include <bits/stdc++.h>

using namespace std;

// Given an integer array nums that may contain duplicates, return all possible
// subsets.

// The solution set must not contain duplicate subsets. Return the solution in
// any order.

// Input: nums = [1,2,2]
// Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

void printArray(vector<int> nums) {
  cout << "{";
  for (int i = 0; i < nums.size(); i++) {
    if (i != nums.size() - 1)
      cout << nums[i] << ",";
    else
      cout << nums[i];
  }
  cout << "}" << endl;
}

void subsets2(vector<int> nums, vector<int> &output, int index) {
  printArray(output);

  for (int i = index; i < nums.size(); i++) {
    if (i > index && nums[i] == nums[i - 1])
      continue;

    output.push_back(nums[i]);
    subsets2(nums, output, i + 1);
    output.pop_back();
  }
}

int main() {
  vector<int> nums = {1, 2, 2};
  vector<int> output;             // data structure to carry current subseq
  sort(nums.begin(), nums.end()); // to deal with duplicates
  int index = 0;
  subsets2(nums, output, index);
}