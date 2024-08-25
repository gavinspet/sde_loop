#include <bits/stdc++.h>

using namespace std;

void merge(vector<int> &nums, int low, int mid, int high) {
  int n1 = mid - low + 1;
  int n2 = high - mid; // high - (mid+1) +1
  vector<int> a(n1);   // left array
  vector<int> b(n2);   // right array

  for (int l = 0; l < n1; l++)
    a[l] = nums[low + l];

  for (int l = 0; l < n2; l++)
    b[l] = nums[mid + 1 + l];

  int i = 0, j = 0;
  int k = 0;

  while (i < n1 && j < n2) {
    if (a[i] <= b[j])
      nums[low + k] = a[i++];
    else
      nums[low + k] = b[j++];

    k++;
  }

  while (i < n1) {
    nums[low + k] = a[i++];
    k++;
  }
  while (j < n2) {
    nums[low + k] = b[j++];
    k++;
  }

  a.clear();
  b.clear();
}

void mergesort(vector<int> &nums, int low, int high) {
  if (low >= high)
    return;
  int mid = low + (high - low) / 2;
  mergesort(nums, low, mid);
  mergesort(nums, mid + 1, high);
  merge(nums, low, mid, high);
}

vector<int> sortArray(vector<int> &nums) {
  int low = 0;
  int high = nums.size() - 1;
  mergesort(nums, low, high);
  return nums;
}

int main() {
  vector<int> nums = {3, 2, 1, 4, 5, 8, -9};
  int n = nums.size();
  sortArray(nums);
}