#include <bits/stdc++.h>

using namespace std;

void PrintVector(vector<int> &nums) {

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

void nextPermutation(vector<int> &nums) {

  int iPivot = -1;
  for (int j = nums.size() - 1; j >= 1; j--) {
    if (nums[j] > nums[j - 1]) {
      iPivot = j - 1;
      break;
    }
  }

  if (iPivot == -1) {
    reverse(nums.begin(), nums.end());
    return;
  }

  for (int j = nums.size() - 1; j >= iPivot; j--) {
    if (nums[j] > nums[iPivot]) {
      swap(nums[j], nums[iPivot]);
      break;
    }
  }
  sort(nums.begin() + iPivot + 1, nums.end());
  return;
}

int main() {
  vector<int> nums = {2, 4, 1, 7, 5, 0};
  PrintVector(nums);
  nextPermutation(nums);
  PrintVector(nums);
}