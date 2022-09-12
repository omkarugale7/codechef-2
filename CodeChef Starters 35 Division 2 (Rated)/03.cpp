/*Editor: Omkar Ugale
Time : .  20th April 2022 */
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
        vector<int> parity;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if ((arr[0] % 2) == (arr[n - 1] % 2))
        {
            ll ans = 0;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] % 2 == arr[0] % 2)
                    ans++;
            }
            cout << ans << endl;
        }
        else
        {
            ll br[n], ans = 0;
            br[0] = 0;
            for (int i = 1; i < n; i++)
            {
                if (arr[0] % 2 != arr[i] % 2)
                    br[i] = br[i - 1] + 1;
                else
                    br[i] = br[i - 1];
            }
            ans = br[n - 1];
            ll cc = 0;
            for (int i = 1; i < n; i++)
            {
                if (arr[i] % 2 == arr[0] % 2)
                {
                    cc++;
                    ans = min(cc + br[n - 1] - br[i], ans);
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}