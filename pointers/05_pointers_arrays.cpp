#include <iostream>

using namespace std;

int main() {
  int arr[] = {2, 3, 4, 5, 6};

  cout << arr << endl;     // addr2
  cout << &arr[0] << endl; // addr2
  cout << arr[0] << endl;  // 2
  cout << *arr << endl;    // 2
}