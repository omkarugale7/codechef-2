/*Editor: Omkar Ugale
Time : .  21th April 2022 */
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
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll x;
        cin >> x;
        ll xarr[n];
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            xarr[i] = arr[i] & x; 
            m[xarr[i]]++;
        }
        ll ans = 0;
        for (auto it : m)
        {
            ans += (it.second) * (it.second);
        }
        cout << ans << endl;
    }
    return 0;
}