#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
void topologicalSort(vector<int> adj[], int v)
{
    vector<int> in_degree(v, 0);
    for (int i = 0; i < v; i++)
    {
        for (int x : adj[i])
        {
            in_degree[x]++;
        }
    }
    queue<int> q;
    for (int i = 0; i < v; i++)
    {
        if (in_degree[i] == 0)
        {
            q.push(i);
        }
    }
    while (q.empty() == false)
    {
        int top = q.front();
        q.pop();
        cout << top << " ";
        for (int u : adj[top])
        {
            in_degree[u]--;
            if (in_degree[u] == 0)
            {
                q.push(u);
            }
        }
    }
}
int main()
{
    int V = 5;
    vector<int> adj[V];
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    topologicalSort(adj, V);
    return 0;
}