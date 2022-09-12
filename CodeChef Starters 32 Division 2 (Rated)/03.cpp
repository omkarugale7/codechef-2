/*Editor: Omkar Ugale
Time : .  29th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        map<int, int> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            arr[i] = a;
            m[a]++;
        }
        int maxcnt = 0;
        int ans = 0;
        for (auto it : m)
        {
            maxcnt = max(maxcnt, it.second);
        }
        sort(arr, arr + n);
        ans = arr[min(k, n - 1)];
        cout << ans << endl;
    }
    return 0;
}