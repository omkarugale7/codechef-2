/* Editor: Omkar Ugale
DATE - 11-Jul-2022 TIME - 21:50:45*/
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
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll ans = 0;
        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
            ans = max(ans, arr[i] - arr[i - 1]);
        cout << ans << endl;
    }
    return 0;
}