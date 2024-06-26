#include <iostream>

using namespace std;

void print(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int j = i - 1;
    int key = arr[i];
    while (j >= 0 && key < arr[j]) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}

int main() {
  int arr[] = {3, 4, 2, 1, 5};
  int n = sizeof(arr) / sizeof(int);

  print(arr, n);
  insertion_sort(arr, n);
  print(arr, n);
}