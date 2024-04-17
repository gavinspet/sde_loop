#include<iostream>
#include<vector> 
using namespace std;

void printMatrix(vector<vector<int>>& matrix)
{
    for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
}


    void rotate(vector<vector<int>>& matrix) {

        // swap rows and cols
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = i; j < matrix[i].size(); j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // reverse each rows
        for (int i = 0; i < matrix.size(); i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

int main()
{
  vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
//   printMatrix(matrix);
  rotate(matrix);
  printMatrix(matrix);

 return 0;
}