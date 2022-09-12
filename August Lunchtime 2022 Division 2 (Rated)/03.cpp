/* Editor: Omkar Ugale
DATE - 22-Aug-2022 TIME - 20:41:13*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int ans = 0;
void dfs(vector<int> g[], int node, int parent, vector<int> &vis)
{
    vis[node] = 1;
    for (auto child : g[node])
    {
        if (g[node].size() < ans)
            ans += g[node].size() - ans + 1;
        dfs(g, child, node, vis);
    }
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        vector<int> graph[n + 1];
        for (int i = 0; i < c; i++)
        {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vector<int> vis(n + 1);
        dfs(graph, 1, -1, vis);
        cout << ans << endl;
    }
    return 0;
}