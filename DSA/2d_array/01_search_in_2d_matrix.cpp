#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target) {

  int i = 0;
  int j = matrix[0].size() - 1;

  while (i < matrix.size() && j >= 0) {
    if (matrix[i][j] < target)
      i++;
    else if (matrix[i][j] > target)
      j--;
    else
      return true;
  }
  return false;
}

int main() {
  vector<vector<int>> nums = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
}