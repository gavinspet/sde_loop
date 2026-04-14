// Q: https://leetcode.com/problems/set-matrix-zeroes/description/

#include <bits/stdc++.h>

using namespace std;

void printMatrix(vector<vector<int>> nums) {
  for (int i = 0; i < nums.size(); i++) {
    for (int j = 0; j < nums[i].size(); j++) {
      cout << nums[i][j] << " ";
    }
    cout << endl;
  }
}

void setZeroes(vector<vector<int>> &matrix) {
  vector<int> rows(matrix.size(), 1);    // representing j's
  vector<int> cols(matrix[0].size(), 1); // representing i's

  for (int i = 0; i < matrix.size(); i++) // rows
  {
    for (int j = 0; j < matrix[i].size(); j++) // cols
    {
      if (matrix[i][j] == 0) {
        rows[i] = 0;
        cols[j] = 0;
      }
    }
  }

  for (int i = 0; i < matrix.size(); i++) // rows
  {
    for (int j = 0; j < matrix[i].size(); j++) // cols
    {
      if (rows[i] == 0 || cols[j] == 0) {
        matrix[i][j] = 0;
      }
    }
  }
}

int main() {
  vector<vector<int>> nums;
  nums = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

  printMatrix(nums);
}