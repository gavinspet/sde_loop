#include <bits/stdc++.h>
using namespace std;

void bfs(vector<int> adjL[])
{
    
}

/*
Breadth first Search - traversal technique    
*/

int main()
{
    int n = 9;
    // create adjacency list
    vector<int> adjL[n];

    adjL[1].push_back(2);
    adjL[1].push_back(6);

    adjL[2].push_back(1);
    adjL[2].push_back(3);
    adjL[2].push_back(4);

    adjL[3].push_back(2);
 
    adjL[4].push_back(2);
    adjL[4].push_back(5);

    adjL[5].push_back(4);
    adjL[5].push_back(8);

    adjL[6].push_back(1);
    adjL[6].push_back(7);
    adjL[6].push_back(9);

    adjL[7].push_back(6);
    adjL[7].push_back(8);

    adjL[8].push_back(5);
    adjL[8].push_back(7);

    adjL[9].push_back(6);

}