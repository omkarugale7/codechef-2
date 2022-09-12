/* Editor: Omkar Ugale
DATE - 17-Aug-2022 TIME - 20:01:02*/
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        string s;
        cin >> s;
        int ans = INT_MAX, i = 0;
        bool zeromila = false;
        if (s[0] == '0')
            zeromila = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeromila = true;
            if (zeromila && s[i] == '0')
                ans = min(ans, arr[i]);
            if (zeromila && s[i] == '1')
                break;
        }
        cout << ans << endl;
        // for (i = 0; i < n; i++)
        // {
        //     while (s[i] == '1')
        //         continue;
        //     if (s[i] == '0')
        //         break;
        // }
        // for (i; i < n; i++)
        // {
        //     if (s[i] == '1')
        //         break;
        //     ans = min(ans, arr[i]);
        // }
        // cout << ans << endl;
        // PrintArr(arr);
    }
    return 0;
}