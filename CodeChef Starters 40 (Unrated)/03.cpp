/* Editor: Omkar Ugale
DATE - 26-May-2022 TIME - 21:39:44*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        ll brr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
        }
        ll ans = brr[0];
        for (int i = 1; i < n; i++)
        {
            ans = ans & brr[i];
        }
        map<ll, ll> m;
        for (int i = 0; i < n; i++)
        {
            m[brr[i]]++;
        }
        bool milegakya = true;
        for (int i = 0; i < n; i++)
        {

            if (m.find(ans | arr[i]) != m.end())
            {
                m[ans | arr[i]]--;
            }
            else
            {
                milegakya = false;
                break;
            }
            if( m[ans | arr[i]]==0)
            m.erase( ans | arr[i]);
        }
        if (m.size() != 0)
            milegakya = false;
        if (milegakya)
            cout << ans << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}