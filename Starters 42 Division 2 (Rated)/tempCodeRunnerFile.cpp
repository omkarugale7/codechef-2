/* Editor: Omkar Ugale
DATE - 08-Jun-2022 TIME - 20:00:07*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a % 3 == 0 || b % 3 == 0)
            cout << 0 << endl;
        else
        {
           ll ans = 0;
            while (a % 3 != 0 && b % 3 != 0)
            {
                // cout<<a<<" "<<b<<endl;
                int t = a;
                a = abs(a - b);
                b = t;
                ans++;
                if(a%3==0 || b %3==0)
                break;
            }
            cout << ans << endl;
                // cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}