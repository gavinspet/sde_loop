#include <iostream>

using namespace std;

void print(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << (*arr + i) << " ";
  }
  cout << endl;
}

void bubble_sort(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (arr[j] < arr[i])
        swap(arr[i], arr[j]);
    }
  }
}

int main() {
  int arr[] = {3, 4, 2, 1, 5};
  int n = sizeof(arr) / sizeof(int);

  print(arr, n);
  bubble_sort(arr, n);
  print(arr, n);
}