#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void dfsShort(vector<int> adj[], int v, int s, int dist[])
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    visited[s] = true;
    queue<int> q;
    dist[s] = 0;
    q.push(s);
    while (q.empty() == false)
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (visited[v] == false)
            {
                dist[v] = dist[u] + 1;
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
int main()
{
    int v = 4;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 2, 3);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    int dist[v];
    for (int i = 0; i < v; i++)
    {
        dist[i] = INT_MAX;
    }
    dfsShort(adj, v, 0, dist);
    for(int i=0;i<v;i++)
    {
        cout<<dist[i]<<" ";
    }
    return 0;
}