#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> nums, vector<int> &output, int index, int sum,
          int target) {
  if (index == nums.size()) {
    if (sum == target) {
      return 1;
    }
    return 0;
  }

  // pick
  sum += nums[index];
  output.push_back(nums[index]);
  int l = solve(nums, output, index + 1, sum, target);

  output.pop_back();
  sum -= nums[index];

  // not pick
  int r = solve(nums, output, index + 1, sum, target);

  return r + l;
}

int main() {
  vector<int> nums = {1, 2, 1, 0};
  vector<int> output;

  int target = 2;

  cout << solve(nums, output, 0, 0, target) << endl;
}