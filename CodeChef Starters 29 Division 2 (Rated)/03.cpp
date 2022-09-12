#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int mod = 1e9 + 7;
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < m; i++)
        {
            ll kaunsa_react_karega, kitna_karega;
            cin >> kaunsa_react_karega >> kitna_karega;
            for (int i = 0; i < kitna_karega; i++)
            {
                ll weight, index;
                cin >> weight >> index;
                arr[index - 1] = arr[index - 1] % mod + (weight % mod * arr[kaunsa_react_karega - 1] % mod) % mod;
                arr[index - 1] %= mod;
            }
            arr[kaunsa_react_karega - 1] = 0;
            
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << endl;
    }
    return 0;
}