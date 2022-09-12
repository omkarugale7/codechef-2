/* Editor: Omkar Ugale
DATE - 03-Aug-2022 TIME - 22:16:05*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        if (y >= x)
            cout << ceil(arr[n - 1] * 1.0 / y) << endl;
        else
        {
            int ans = arr[n - 1] / x;
            int rem = arr[n - 1] % x;
            ans += min(ceil(1.0 * rem / x), ceil(1.0 * rem / y));
            cout << ans << endl;
        }

        // PrintArr(arr);
    }
    return 0;
}