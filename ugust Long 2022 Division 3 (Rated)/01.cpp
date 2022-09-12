/* Editor: Omkar Ugale
DATE - 12-Aug-2022 TIME - 17:17:18*/
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
        if (n < 100)
            cout << n << endl;
        else if (n <= 1000)
            cout << n - 25 << endl;
        else if (n <= 5000)
            cout << n - 100 << endl;
        else
            cout << n - 500 << endl;
    }
    return 0;
}