#include <bits/stdc++.h>

using namespace std;

void approach1(vector<int> &nums) { sort(nums.begin(), nums.end()); }

void approach2(vector<int> &nums) {
  int count0 = 0, count1 = 0, count2 = 0;

  for (int i = 0; i < nums.size(); i++) {
    switch (nums[i]) {
    case 0: {
      count0++;
      break;
    }
    case 1: {
      count1++;
      break;
    }
    case 2: {
      count2++;
      break;
    }
    default:
      break;
    }
  }

  int k = 0;
  while (count0--) {
    nums[k++] = 0;
  }

  while (count1--) {
    nums[k++] = 1;
  }

  while (count2--) {
    nums[k++] = 2;
  }
}

void approach3(vector<int> &nums) {
  int low = 0;
  int high = nums.size() - 1;

  int curr = 0;
  while (curr <= high) {
    if (nums[curr] == 0) {
      swap(nums[curr++], nums[low++]);
    } else if (nums[curr] == 2) {
      swap(nums[curr], nums[high--]);
    } else {
      curr++;
    }
  }
}

void sortColors(vector<int> &nums) {

  //   approach1(nums); // using STL T -> O(nlogN); S -> O(1)
  //   approach2(nums); // using count method T -> O(N); S -> O(1) but two
  //   variables
  approach3(nums); // two pointer approach
}

void printVector(vector<int> &nums) {

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> nums = {2, 2, 2, 2, 1, 2, 1, 1, 1, 0, 0, 0, 0, 0, 2, 1};
  printVector(nums);
  sortColors(nums);
  printVector(nums);
}