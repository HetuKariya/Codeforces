#include <bits/stdc++.h>
using namespace std;
int max_depth = 0;
void dfs(int, unordered_map<int, bool> &, unordered_map<int, vector<int>> &, int);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    unordered_map<int, vector<int>> adj;
    unordered_map<int, bool> visited;
    int n, u;
    cin >> n;
    int j = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> u;
        adj[u].push_back(j);
        adj[j].push_back(u);
        j++;
    }
    if (adj.find(-1) != adj.end())
        dfs(-1, visited, adj, 1);
    cout << max_depth - 1 << endl;
    return 0;
}
void dfs(int node, unordered_map<int, bool> &visited, unordered_map<int, vector<int>> &adj, int depth)
{
    max_depth = max(max_depth, depth);
    visited[node] = true;
    for (auto i : adj[node])
    {
        if (!visited[i])
            dfs(i, visited, adj, depth + 1);
    }
}