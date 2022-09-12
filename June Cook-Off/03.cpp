/* Editor: Omkar Ugale
DATE - 05-Jun-2022 TIME - 20:37:42*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
ll lcm(ll a, ll b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 2)
            cout << 0 << endl;
        else if (n % 2)
            cout << lcm(n / 2, n / 2 + 1) - __gcd(n / 2, n / 2 + 1) << endl;
        else
        {
            if (n % 4 == 0)
                cout << lcm(n / 2 - 1 , n / 2 + 1) - __gcd(n / 2 - 1 , n / 2 + 1)<< endl;
            else
                cout << lcm(n / 2 - 2 , n / 2 + 2)-__gcd(n / 2 - 2 , n / 2 + 2) << endl;
        }
    }
    return 0;
}