/* Editor: Omkar Ugale
DATE - 10-Aug-2022 TIME - 20:00:30*/
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
        int x = 0, m = n;
        while (m > 0)
        {
            if (m % 2)
                x += 1;
            m /= 2;
        }
        int ans = ceil(x*1.0/2);
        cout << ans << endl;
    }
    return 0;
}