/*Editor: Omkar Ugale
Time : . 13th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> arr;
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            arr.push_back(k);
        }
        sort(arr.begin(), arr.end());
        int i;
        for (i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                ans++;
                k -= arr[i];
            }
            else if (((arr[i] + 1) / 2) <= k)
            {
                ans++;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}