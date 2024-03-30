#include <iostream>

using namespace std;

void reverse_two(int arr[], int n, int i, int j) {
  if (i >= j) {
    cout << "reverse two ending ..\n";
    return;
  }
  swap(arr[i], arr[j]);
  reverse_two(arr, n, i + 1, j - 1);
}

void reverse_one(int arr[], int n, int i) {
  if (i >= n / 2)
    return;

  swap(arr[i], arr[n - 1 - i]);
  reverse_one(arr, n, i + 1);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    if (i == n - 1) {
      cout << endl;
    }
  }

  // reverse_two(arr,n,0,n-1);
  reverse_one(arr, n, 0);
  // cout<<"size of array is: "<<n<<endl;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
    if (i == n - 1) {
      cout << endl;
    }
  }
}