// In this graph  what we are going to do that is .... 
// We gonna traversal adjacent of every node 




/*
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void DFS_Recursive(vector<int> adj[], int source, vector<bool>& visited);

void DFS(vector<int> adj[], int vertex, int source)
{
    vector<bool> visited(vertex, false);

    for (int i = 0; i < vertex; i++)
    {
        if (visited[i]==false)
        {
            DFS_Recursive(adj, i, visited);
        }
    }
}

void DFS_Recursive(vector<int> adj[], int source, vector<bool>& visited)
{
    visited[source] = true;
    cout << source << " ";

    for (int u : adj[source])
    {
        if (visited[u]==false)
        {
            DFS_Recursive(adj, u, visited);
        }
    }
}

int main()
{
    int vertex, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertex;
    cout << "Enter the number of edges: ";
    cin >> edges;

    vector<int> adj[vertex]; // Create an adjacency list for the graph

    cout << "Enter the edges (format: u v):" << endl;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
    }

    int source;
    cout << "Enter the source vertex: ";
    cin >> source;

    DFS(adj, vertex, source);

    return 0;
}


output:


Enter the number of vertices: 6
Enter the number of edges: 7
Enter the edges (format: u v):
0 1
0 2
1 3
2 3
3 4
4 5
5 0
Enter the source vertex: 0
0 1 3 4 5 2

*/


