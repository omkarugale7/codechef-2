/* Editor: Omkar Ugale
DATE - 20-Jul-2022 TIME - 20:58:43*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        ll ans = 0;
        while (m.size())
        {
            ll a = 1;
            vector<ll> v;
            for (auto it : m)
            {
                v.push_back(it.first);
            }
            for (int i = 0; i < v.size(); i++)
            {
                ll b = m[v[i]];
                while (a <= v[i] && b > 0)
                {
                    a++;
                    b--;
                }
                if (b == 0)
                    m.erase(v[i]);
                else
                    m[v[i]] = b;
            }
            ans++;
        }
        cout << ans << endl;
        // while (arr.size())
        // {
        //     vector<int> temp;
        //     int a = 1;
        //     ans++;
        //     for (int i = 0; i < arr.size(); i++)
        //     {
        //         if (arr[i] >= a)
        //         {
        //             a++;
        //         }
        //         else
        //             temp.push_back(arr[i]);
        //     }
        //     arr = temp;
        // }
        // cout << ans << endl;
    }
    return 0;
}