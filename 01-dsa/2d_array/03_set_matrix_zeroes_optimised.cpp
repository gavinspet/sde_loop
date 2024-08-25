#include <iostream>
#include <vector>

using namespace std;

// problem 73 - leetcode
// Given an m x n integer matrix matrix,
// if an element is 0, set its entire row and column to 0's.
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]

void printMatrix(vector<vector<int>> matrix) {
  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

void transform(vector<vector<int>> &matrix) {
  // rows and cols no. both are more than one - given
  int rows = matrix.size();
  int cols = matrix[0].size();

  int c0 = matrix[0][0];

  // syntax:
  // vector<int> vec(n,5);  will create a vector of size n and fill all the
  // elems as 5

  for (int i = 0; i < matrix.size(); i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      if (matrix[i][j] == 0) {
        // mark the cols and rows tracker arrays
        if (j == 0)
          c0 = 0;
        else
          matrix[0][j] = 0;

        matrix[i][0] = 0;
      }
    }
  }

  for (int i = 1; i < matrix.size(); i++) {
    for (int j = 1; j < matrix[0].size(); j++) {
      if (matrix[i][0] == 0 || matrix[0][j] == 0) {
        matrix[i][j] = 0;
      }
    }
  }

  if (matrix[0][0] == 0) {
    for (int j = 0; j < matrix[0].size(); j++) {
      matrix[0][j] = 0;
    }
  }

  if (c0 == 0) {
    for (int i = 0; i < rows; i++) {
      matrix[i][0] = 0;
    }
  }
}

int main() {
  vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  printMatrix(matrix);
  transform(matrix);
  cout << "After change: " << endl;
  printMatrix(matrix);
}