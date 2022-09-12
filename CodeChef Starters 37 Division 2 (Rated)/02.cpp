/* Editor: Omkar Ugale
Time : . 2nd May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, x;
        cin >> n >> m >> x;
        if (m == x)
            cout << 0 << endl;
        else if (n > x)
            cout << n -  ((n * 1.0) / (x + 1)) << endl;
        else
            cout << n - 1 << endl;
    }
    return 0;
}