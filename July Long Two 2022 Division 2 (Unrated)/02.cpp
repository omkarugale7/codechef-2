/* Editor: Omkar Ugale
DATE - 23-Jul-2022 TIME - 23:23:37*/
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
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // sort(arr, arr + n);
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                cnt++;
                continue;
            }
            else
            {
                ans += ((cnt) * (cnt + 1)) / 2;
                cnt = 0;
            }
        }
                ans += ((cnt) * (cnt + 1)) / 2;
        cout << ans << endl;
        // PrintArr(arr);
    }
    return 0;
}