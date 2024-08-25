#include <bits/stdc++.h>

using namespace std;

/*
Given a collection of candidate numbers (candidates) and a target number
(target), find all unique combinations in candidates where the candidate numbers
sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.



Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output:
[
[1,2,2],
[5]
]
*/

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

vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
  vector<vector<int>> ans;
  vector<int> output;
  sort(candidates.begin(), candidates.end());
  solve(ans, output, candidates, target, 0);
  return ans;
}

void solve(vector<vector<int>> &ans, vector<int> &output, vector<int> &nums,
           int sum_left, int index) {

  if (sum_left == 0) {
    ans.push_back(output);
    return;
  }
  for (int i = index; i < nums.size(); i++) {
    if (i > index && nums[i] == nums[i - 1]) {
      continue;
    }
    if (nums[i] > sum_left) {
      break;
    }
    output.push_back(nums[i]);
    solve(ans, output, nums, sum_left - nums[i], i + 1);
    output.pop_back();
  }
}

int main() {
  vector<int> nums = {10, 1, 2, 7, 6, 1, 5};
  int target = 8;

  combinationSum2(nums, target);
}