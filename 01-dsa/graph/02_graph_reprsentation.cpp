#include <iostream>
#include <vector>

using namespace std;

/*

input - given n and m ( no nodes and m edges) eg - n = 5, m = 6

m lines to represent edges

2 1
1 3
2 4
3 4
2 5
4 5


two ways to store

1. adjacency matrix
2. list
*/

void AdjacencyMatrix() // size - adj[n+1][n+1]
{
    int n, m;
    n = 5; m = 6;

    int adjM[n+1][n+1];

    for(int i =0 ; i<m ; i++)
    {
        int u,v;
        cin>>u>>v;
        adjM[u][v] = 1;
        adjM[v][u] = 1;
    }

}

void AdjacencyList()
{
    int n, m;
    n = 5, m = 6;
    // create an array of nodes size n+1
    vector<int> adjL[n+1]; // O(2E)
    /*
    0
    1 -> 2,3
    2 -> 1,4,5
    3 -> 1,4
    4 -> 3,2,5
    5 -> 2,4
    */

    for(int i = 0; i <m ; i++)
    {
        int u, v;
        cin>>u>>v;
        adjL[u].push_back(v);
        adjL[v].push_back(u);
    }
}

int main()
{

}