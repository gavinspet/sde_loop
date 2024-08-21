#include <bits/stdc++.h>

using namespace std;

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
}

int removeElement(int nums[], int n, int val) {
  int j = n - 1;
  int i = 0;

  while (i <= j) {
    if (nums[j] == val)
      j--;
    else if (nums[i] == val) {
      swap(nums[i], nums[j]);
      i++;
      j--;
    } else
      i++;
  }
  return i;
}

int main() {

  int arr[] = {1, 2, 3, 9, -1, 3, 2, 21, -9, 0, 0};
  int n = sizeof(arr) / sizeof(int);

  print(arr, n);
  int k = removeElement(arr, n, 3);
  print(arr, k);
}