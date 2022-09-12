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
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            arr[i] = abs(k);
        }
        ll ans = 0, maxx = INT_MIN, minn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (i % 2)
            {
                maxx = max(maxx, abs(arr[i]));
                ans -= arr[i];
            }
            else
            {
                minn = min(minn, abs(arr[i]));
                ans += arr[i];
            }
        }
        if (maxx > minn)
        {
            ans += maxx * 2;
            ans -= minn * 2;
        }

        cout << ans << endl;
    }
    return 0;
}