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
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        ll k = ceil(x / float(arr[0]));
        cout << max(k, n) << endl;
    }
    return 0;
}