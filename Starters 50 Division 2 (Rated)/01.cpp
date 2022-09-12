/* Editor: Omkar Ugale
DATE - 03-Aug-2022 TIME - 19:58:53*/
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
        int n, x;
        cin >> n >> x;
        if (x < n)
            cout << -1 << endl;
        else if (x == n)
        {
            for (int i = 1; i <= n; i++)
            { 
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            int k = x - n+1;
            cout << k << " ";
            for (int i = 1; i <= n; i++)
            {
                if (i != k)
                    cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}