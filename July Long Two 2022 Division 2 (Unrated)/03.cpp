/* Editor: Omkar Ugale
DATE - 23-Jul-2022 TIME - 23:48:25*/
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
        int n, m;
        cin >> n >> m;
        int tem = m / n;
        int diff = 0;
        int i = n, k = m;
        int ans1 = 0, ans2 = 0;
        while (i <= 2 * n)
        {
            tem = (m / i) * i;
            // cout << i << " " << tem << endl;
            if ((tem ) - i >= diff)
            {
                diff = tem - i;
                ans1 = i;
                ans2 = tem;
                // cout << diff << " " << tem << " " << i << endl;
            }
            i++;
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}