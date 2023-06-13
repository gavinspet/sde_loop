#include<bits/stdc++.h>
using namespace std;


void makeAdjacencyList(unordered_map<int, vector<int>> &adjL, vector<vector<int>> &edges)
{
    for(int i=0;i<edges.size();i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
}


void solve(vector<vector<int>> &adjMatrix, unordered_map<int,vector<int>> &adjL)
{
    // code to be written here
}

void print(vector<vector<int>> &adjMatrix)
{
   cout<<"printing adjacency matrix :"<<endl;

    int n = adjMatrix.size();

    for(int i = 0;i<n ;i++)
    {
        for(int j = 0 ; j<n ;j++)
        {
            cout<<adjMatrix[i][j]<<" ";            
        }
       cout<<endl;
    }
}

int main()
{
// generating input //////////////////////////////////////////

    // for this input is going to be adjacency list
    unordered_map<int, vector<int>> adjL;

   int n = 5;  // no. of nodes = 5
   int m = 6;  // no. of nodes = 6

// edge list will be represented in form of a 2-d integer vector
   vector<vector<int>> edges(m, vector<int>(2, 0));

// our edge list will be ->
//    1 2
//    2 3
//    3 1
//    0 1
//    4 0
//    4 3

edges[0][0] = 1; edges[0][1] = 2;
edges[1][0] = 2; edges[1][1] = 3;
edges[2][0] = 3; edges[2][1] = 1;
edges[3][0] = 0; edges[3][1] = 1;
edges[4][0] = 4; edges[4][1] = 0;
edges[5][0] = 4; edges[5][1] = 3;
makeAdjacencyList(adjL,edges);
////////////////////////////////////////////////

  vector<vector<int>> adjM(n,vector<int>(n,0));

  solve(adjM, adjL);
   

  print(adjM);

}