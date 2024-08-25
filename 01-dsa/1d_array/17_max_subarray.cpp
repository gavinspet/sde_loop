#include <iostream>
#include <vector>
using namespace std;

void printArray(vector<int> nums) {
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int maxSubArray(vector<int> &nums) {
  int curr_sum = nums[0];
  int ans = nums[0];
  for (int i = 1; i < nums.size(); i++) {
    // purana wala bhul jao agar negative hai toh
    if (curr_sum < 0) {
      curr_sum = 0;
    }
    // naya wala toh lena hi lena
    curr_sum += nums[i];
    ans = max(ans, curr_sum);
  }
  return ans;
}

int main() {
  vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  return 0;
}