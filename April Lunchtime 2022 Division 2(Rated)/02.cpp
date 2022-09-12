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
        int n, m, l;
        cin >> n >> m >> l;
        int k = m % (n + l - 1);
        if (n == 0)
            cout << k << endl;
        else if (k >= l)
            cout << 0 << endl;
        else
            cout << k << endl;
    }
    return 0;
}
