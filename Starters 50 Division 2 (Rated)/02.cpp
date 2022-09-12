/* Editor: Omkar Ugale
DATE - 03-Aug-2022 TIME - 20:17:36*/
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
        if (n == 3)
            cout << "1 2 3" << endl;
        else if (n == 4)
            cout << "4 1 2 3" << endl;
        else
        {
            cout << n - 1 << " " << n - 2 << " ";
            for (int i = 1; i <= n - 3; i++)
            {
                cout << i << " ";
            }
            cout << n << endl;
        }
    }
    return 0;
}
