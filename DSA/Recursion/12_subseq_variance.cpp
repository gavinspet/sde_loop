#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

int numSubseq(vector<int> &nums, int target) {
  vector<int> output;
  return solve(nums, output, 0, target);
}

int solve(vector<int> nums, vector<int> &output, int index, int target) {

  // base case
  if (index == nums.size()) {
    // can't be non empty
    if (output.size() == 0)
      return 0;

    int mini = output[0];
    int maxa = output[0];
    for (int i = 0; i < output.size(); i++) {
      maxa = max(output[i], maxa);
      mini = min(output[i], mini);
    }
    if (maxa + mini <= target)
      return 1;
    else
      return 0;
  }

  // pick
  output.push_back(nums[index]);
  int l = solve(nums, output, index + 1, target) % MOD;

  output.pop_back();

  // not pick
  int r = solve(nums, output, index + 1, target) % MOD;

  return (r + l) % MOD;
}

int main() {
  vector<int> nums = {3, 3, 6, 8};
  int target = 10; // ans = 6

  numSubseq(
      nums,
      target); // this gives TLE in leetcode since it is brute force approach
}