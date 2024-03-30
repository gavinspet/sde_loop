#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> vec) {
  int n = vec.size();

  for (int i = 0; i < n; i++) {
    cout << vec[i] << " ";
    if (i == n - 1)
      cout << endl;
  }
}

void solve(vector<int> nums, vector<int> output, int index, int sum,
           int target) {
  if (index == nums.size()) {
    if (sum == target) {
      printArray(output);
    }
    return;
  }

  // pick
  sum += nums[index];
  output.push_back(nums[index]);
  solve(nums, output, index + 1, sum, target);
  output.pop_back();
  sum -= nums[index];

  // not pick
  solve(nums, output, index + 1, sum, target);
}

int main() {
  vector<int> nums = {1, 2, 1};

  vector<int> output;

  solve(nums, output, 0, 0, 2);
}