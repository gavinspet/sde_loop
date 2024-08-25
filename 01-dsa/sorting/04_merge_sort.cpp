#include <iostream>

using namespace std;

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void merge(int arr[], int low, int mid, int high) {
  int n1 = mid - low + 1;
  int n2 = high - mid;

  int arr1[n1];
  int arr2[n2];

  for (int i = 0; i < n1; i++) {
    arr1[i] = arr[i];
  }

  for (int i = 0; i < n2; i++) {
    arr2[i] = arr[i + n1];
  }

  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      arr[k++] = arr1[i++];
    } else {
      arr[k++] = arr2[j++];
    }
  }

  while (i < n1) {
    arr[k++] = arr1[i++];
  }

  while (j < n2) {
    arr[k++] = arr2[j++];
  }
}

void merge_sort(int arr[], int low, int high) {

  if (low >= high)
    return;
  int mid = low + (high - low) / 2;
  merge_sort(arr, low, mid);
  merge_sort(arr, mid + 1, high);

  merge(arr, low, mid, high);
}

int main() {
  int arr[] = {3, 4, 2, 1, 5};
  int n = sizeof(arr) / sizeof(int);

  print(arr, n);
  merge_sort(arr, 0, n - 1);
  print(arr, n);
}