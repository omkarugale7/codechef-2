/*Editor: Omkar Ugale
Time : . 19th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll; // we're declaring it globally as value is initialized to 0 upon declaring globally.
void bfs(int u)
{
    queue<int> q;
  
    q.push(u);
    v[u] = true;
  
    while (!q.empty()) {
  
        int f = q.front();
        q.pop();
  
        cout << f << " ";
  
        // Enqueue all adjacent of f and mark them visited 
        for (auto i = g[f].begin(); i != g[f].end(); i++) {
            if (!v[*i]) {
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}
int main()
{
    int n, m, q;
    cin >> n >> m >> q;
    int arr[n + 1] = {0};
    vector<int> freezed;
    vector<int> varr[n + 1];
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        varr[a].push_back(b);
        varr[b].push_back(a);
    }
    vector<pair<int, int>> queries;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        queries.push_back(make_pair(a, b));
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << "-";
        for (int j = 0; j < varr[i].size(); j++)
            cout << varr[i][j] << " ";
        cout << endl;
    }
    for (auto it : queries)
    {
        if (it.first == 1)
        {
            arr[it.second] = 1;
            freezed.push_back(it.second);
        }
        else if (it.first == 2)
        {
            for (int i = 0; i < it.second; i++)
            {
                for (auto it : freezed)
                {
                    for (auto itt : varr[it])
                    {
                        if (arr[itt] == 0)
                        {
                            arr[itt] = 1;
                            freezed.push_back(itt);
                        }
                    }
                }
            }
        }
        else if (it.first == 3)
        {
            bool milgaya = false;
            for (int i = 0; i < freezed.size(); i++)
            {
                if (freezed[i] == it.second)
                {
                    milgaya = true;
                    break;
                }
            }
            if (milgaya)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}