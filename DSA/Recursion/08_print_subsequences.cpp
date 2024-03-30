#include <bits/stdc++.h>

using namespace std;

void printArray(vector<int> vec) {
  int n = vec.size();

  for (int i = 0; i < n; i++) {
    cout << vec[i] << " ";
    if (i == n - 1)
      cout << endl;
  }
}

// for every element we have two options - i. take
//                                       - ii. don't take

void print_subsequence(vector<int> nums, vector<int> &output, int index) {
  if (index >= nums.size()) {
    printArray(output);
    return;
  }
  output.push_back(nums[index]);
  print_subsequence(nums, output,
                    index + 1); // case where we take i.e 3  1  2 index = 3
  output.pop_back();            // makes it 3 2 at index = 2
  print_subsequence(nums, output,
                    index + 1); // case where we don't take i.e 3 1 index = 3
}

int main() {
  vector<int> nums = {3, 1, 2};
  vector<int> output;
  print_subsequence(nums, output, 0);
}