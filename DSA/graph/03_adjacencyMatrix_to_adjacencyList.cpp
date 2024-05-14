#include <bits/stdc++.h>
using namespace std;

void makeAdjacencyMatrix(vector<vector<int>> &adjMatrix,
                         vector<vector<int>> &edges) {
  for (int i = 0; i < edges.size(); i++) {
    int u = edges[i][0];
    int v = edges[i][1];
    adjMatrix[u][v] = 1;
    adjMatrix[v][u] = 1;
  }
}

void solve(vector<vector<int>> &adjMatrix,
           unordered_map<int, vector<int>> &adjL) {
  // code to be written here

  // adding comment to check the script
}

void printAdjacencyList(unordered_map<int, vector<int>> &adjL) {
  for (auto i : adjL) {
    cout << i.first << " -> ";
    int x = i.second.size();
    for (int j = 0; j < x; j++) {
      cout << i.second[j];
      if (j < x - 1)
        cout << ", ";
    }
    cout << endl;
  }
}

int main() {
  ///////////////////////////////////////////////////////////////////
  // input will be adjacency matrix in this case
  //////////////////////////////////////////////////
  int n = 5; // no. of nodes = 5
  int m = 6; // no. of nodes = 6

  // edge list will be represented in form of a 2-d integer vector
  vector<vector<int>> edges(m, vector<int>(2, 0));

  // our edge list will be ->
  //    1 2
  //    2 3
  //    3 1
  //    0 1
  //    4 0
  //    4 3

  edges[0][0] = 1;
  edges[0][1] = 2;
  edges[1][0] = 2;
  edges[1][1] = 3;
  edges[2][0] = 3;
  edges[2][1] = 1;
  edges[3][0] = 0;
  edges[3][1] = 1;
  edges[4][0] = 4;
  edges[4][1] = 0;
  edges[5][0] = 4;
  edges[5][1] = 3;

  vector<vector<int>> adjMatrix(n, vector<int>(n, 0));
  makeAdjacencyMatrix(adjMatrix, edges);

  unordered_map<int, vector<int>> adjL;

  solve(adjMatrix, adjL);

  printAdjacencyList(adjL);
}