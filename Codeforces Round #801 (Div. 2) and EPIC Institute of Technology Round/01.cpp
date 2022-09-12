/* Editor: Omkar Ugale
DATE - 18-Jun-2022 TIME - 19:53:57*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        ll arr[m][n];
        ll maxvalue = 0, a = 0, b = 0, maxi = 0, maxj = 0;
        for (ll i = 0; i < m; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] >arr[maxi][maxj])
                {
                    maxvalue = arr[i][j];
                    maxi = i;
                    maxj = j;
                }
            }
        }
        a = max(maxi + 1, m - maxi);
        b = max(maxj + 1, n - maxj);
        cout << a * b << endl;
    }
    return 0;
}