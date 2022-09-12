/* Editor: Omkar Ugale
DATE - 03-Aug-2022 TIME - 20:53:47*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        vector<pair<int, int>> ans;
        int k = sqrt(y);
        while (y % k != 0)
            k--;
        int k1 = y / k;
        ans.push_back({k, k1});
        bool nahimila = false;
        int kk = min(k, k1);
        int kkk = max(k, k1);
        if ((x + 1) / 2 < kk)
            ans.push_back({x / 2, (x + 1) / 2});
        else if (x / 2 > kkk)
            ans.push_back({kkk + 1, x - kkk - 1});
        else
            nahimila = true;
        if (!nahimila)
        {
            cout << ans[0].first << " " << ans[0].second << endl;
            cout << ans[1].first << " " << ans[1].second << endl;
        }
        else
            cout << "-1" << endl;
    }
    return 0;
}