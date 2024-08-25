
#include <bits/stdc++.h>

using namespace std;

void print(vector<int> nums) {
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << endl;
  }
  cout << endl;
}

vector<int> solve(vector<int> nums1, vector<int> nums2) {
  vector<int> ans;
  // logic
  sort(nums1.begin(), nums1.end());
  sort(nums2.begin(), nums2.end());

  return ans;
}

int main() {
  vector<int> nums1 = {4, 9, 5};
  vector<int> nums2 = {9, 4, 9, 8, 4};

  vector<int> ans = solve(nums1, nums2);

  // print(ans);
}