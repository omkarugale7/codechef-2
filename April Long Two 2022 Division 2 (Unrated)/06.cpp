/*Editor: Omkar Ugale
Time : .  24th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;
            v.push_back(make_pair(a, b));
        }
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int dist = ((v[i].first - v[j].first) * (v[i].first - v[j].first) + (v[i].second - v[j].second) * (v[i].second - v[j].second));
                m[dist]++;
                cout << v[i].first << " " << v[j].first << " " << v[i].second << " " << v[j].second << " " << dist << endl;
            }
        }
        int ans = 0;
        for (auto it : m)
        {
            for (auto itt : m)
            {
                // if (it.first == itt.first && itt.second == itt.second)
                //     continue;
                cout << it.first << " " << it.second << endl;
                cout << itt.first << " " << itt.second << endl;
                if (m.find(it.first + itt.first) != m.end())
                    ans += it.second * itt.second;
            }
        }
        cout << ans << endl;
    }
    return 0;
}