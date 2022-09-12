/* Editor: Omkar Ugale
Time : . 11th May 2022 */
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
        ll brr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        map<pair<ll, ll>, ll> m;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (m.find({brr[i], arr[i]}) != m.end())
            {
                ans += m[{brr[i], arr[i]}];
            }
            m[{arr[i], brr[i]}]++;
        }
        cout << ans << endl;
    }
    return 0;
}