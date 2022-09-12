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
        int n;
        cin >> n;
        int k;
        cin >> k;
        for (int i = 1; i <= n; i++)
        {
            cout << k << "^" << i << " - " << (k ^ i) << endl;
        }
    }
    return 0;
}