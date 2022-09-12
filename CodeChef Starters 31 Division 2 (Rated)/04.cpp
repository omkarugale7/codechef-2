/*Editor: Omkar Ugale
Time : .  23th March 2022 */
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
            cin >> arr[i];
        sort(arr, arr + n);
        ll a = 1;
        ll curr = 0, temp = 1, ans = 0;
        for (int i = 0; i < n; i++)
        {
            int j = 1;
            while (j <= arr[i])
            {
                j *= 2;
            }
            // cout << i << " " << j << endl;
            if (temp == j)
            {
                curr++;
            }
            else
            {
                temp = j;
                ans += (curr * (curr - 1)) / 2;
                curr = 1;
            }
        }
         ans += (curr * (curr - 1)) / 2;
        cout << ans << endl;
    }
    return 0;
}