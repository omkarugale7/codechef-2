/* Editor: Omkar Ugale
Time : . 18th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void dfs(vector<int> &cities, vector<vector<pair<int, int>>> &tree, int parent, int vertice)
{
    for (auto child : tree[vertice])
    {
        if (child.first == parent)
            continue;
        dfs(cities, tree, vertice, child.first);
        if (cities[child.second] !=1)
            cities[parent] = max(cities[child.first] + 1, cities[parent]);
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<vector<pair<int, int>>> tree(n + 1);
        for (int i = 1; i < n; i++)
        {
            int a, b, wt;
            cin >> a >> b >> wt;
            tree[a].push_back({b, wt});
            tree[b ].push_back({a, wt});
        }
        vector<int> cities(n + 1, 0);
        dfs(cities, tree, 0, 1);
        vector<int> ans;
        int cnt = 0;
        for (auto it : tree[1])
            if (it.second == 0)
            {
                ans.push_back(cities[it.first]);
                cnt += cities[it.first];
            }
        int answer = 0, j = ans.size() - 1;
        sort(ans.begin(), ans.end());
        while (cnt >= k)
        {
            cnt -= ans[j];
            answer++;
            j--;
        }
        cout << answer << endl;
    }
    return 0;
}