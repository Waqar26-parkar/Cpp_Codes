#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void prepareadjacentlist(unordered_map<int, list<int>> &adjacentlist, vector<pair<int, int>>edge) {
    for (int i = 0;  i<edge.size(); i++) {
        int u = edge[i].first;
        int v = edge[i].second;
        adjacentlist[u].push_back(v);
        adjacentlist[v].push_back(u); // Corrected this line
    }
}

void bfs(unordered_map<int, list<int>> &adjacentlist, unordered_map<int, bool> &visited, vector<int> &ans, int node) {
    queue<int> q;
    q.push(node);
    visited[node] = true; // Corrected this line

    while (!q.empty()) {
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);

        for (auto i : adjacentlist[frontNode]) {
            if (!visited[i]) { // Check if the node is not visited before pushing into the queue
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edge) {
    unordered_map<int, list<int>> adjacentlist;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareadjacentlist(adjacentlist, edge);

    for (int i = 0; i < vertex; i++) {
        if (!visited[i]) {
            bfs(adjacentlist, visited, ans, i); // Corrected the function name
        }
    }

    return ans;
}

int main() {
    int vertices, edges;
    cin >> vertices >> edges;

    vector<pair<int, int>> edgeList(edges);
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        edgeList[i] = make_pair(u, v);
    }

    vector<int> traversalResult = BFS(vertices, edgeList);

    cout << "BFS Traversal Order:" << endl;
    for (int node : traversalResult) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}
