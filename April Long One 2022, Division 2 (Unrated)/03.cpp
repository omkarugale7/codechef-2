/*Editor: Omkar Ugale
Time : .  9th April 2022 */
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
        if (a == 1 || b == 1)
            cout << "-1" << endl;
        else if (__gcd(a, b) > 1)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}