/*Editor: Omkar Ugale
Time : .  16th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, c;
        cin >> x >> c;
        if (x == 1 || c == 1)
            cout << 1 << endl;
        else
        {
            ll a = pow(x, (1.0 / c));
            ll i =0;
            for (ll i = 1; i <= a; i++)
            {
                ll b = pow(i, c);
                ll c = __gcd(b, x);
                ll d = (b * x) / c;
               if(d/c<x)
               {
                   x = d/c;
               }
            }
            cout << x << endl;
        }
    }
    return 0;
}