/*Editor: Omkar Ugale
Time : .  13th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        if (((c < a) && (a < b) && (b < d)) || ((a < c) && (c < d) && (d < b)))
            cout << "IMPOSSIBLE" << endl;
        else
            cout << "POSSIBLE" << endl;
    }
    return 0;
}