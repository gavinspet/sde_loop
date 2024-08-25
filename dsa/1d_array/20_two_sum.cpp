#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

void printArray(vector<int> nums) {
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

vector<int> twoSum(vector<int> &nums, int target) {
  vector<int> ans;

  vector<pair<int, int>> arr;

  for (int i = 0; i < nums.size(); i++) {
    arr.push_back(make_pair(nums[i], i));
  }

  sort(arr.begin(), arr.end());

  int i = 0, j = arr.size() - 1;

  while (i < j) {
    int sum = arr[i].first + arr[j].first;

    if (sum > target)
      j--;
    else if (sum < target)
      i++;
    else {
      ans.push_back(arr[i].second);
      ans.push_back(arr[j].second);
      break;
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  vector<int> ans = twoSum(nums, target);
  cout << "{" << ans[0] << "," << ans[1] << "}" << endl;
}