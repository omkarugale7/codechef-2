/* Editor: Omkar Ugale
DATE - 23-Jul-2022 TIME - 21:07:31*/
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
        int a, b, n;
        cin >> a >> b >> n;
        int k = ceil(n / a)  ;
        bool milakya = false;
        if (a % b == 0)
        {
            cout << -1 << endl;
            continue;
        }
        while (!milakya)
        {
            if (k * a >= n && (k * a) % b != 0)
            {
                cout << k * a << endl;
                milakya = true;
                break;
            }
            k++;
        }
        if (!milakya)
            cout << -1 << endl;
    }
    return 0;
}