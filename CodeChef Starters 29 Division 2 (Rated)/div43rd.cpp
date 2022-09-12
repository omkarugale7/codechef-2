#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] < x)
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}