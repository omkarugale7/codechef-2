/*Editor: Omkar Ugale
Time : .  27th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
// typedef double long long ;
bool des(pair<ll, ll> a, pair<ll, ll> b)
{
    return ((a.first - a.second) < (b.first - b.second));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, r;
        cin >> n >> r;
        vector<pair<ll, ll>> arr(n);
        vector<ll> aa(n);
        for (int i = 0; i < n; i++)
            cin >> aa[i];
        vector<ll> bb(n);
        for (int i = 0; i < n; i++)
            cin >> bb[i];

        for (int i = 0; i < n; i++)
        {
            arr[i] = make_pair(aa[i], bb[i]);
        }
        sort(arr.begin(), arr.end(), des);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << arr[i].first << " " << arr[i].second << endl;
        // }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (r >= arr[i].first)
            {
                ans += ((r - arr[i].first) / (arr[i].first - arr[i].second)) + 1;
                r -= (((r - arr[i].first )/ (arr[i].first - arr[i].second)) + 1) * (arr[i].first - arr[i].second);
            }
        }
        cout << ans << endl;
    }
    return 0;
}