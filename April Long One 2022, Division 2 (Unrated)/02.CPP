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
        ll n;
        cin >> n;
        if (n % 4 == 2 || n % 4 == 3)
            cout << "3" << endl;
        else if (n % 4 == 1)
            cout << n << endl;
        else
            cout << n + 3 << endl;
    }
    return 0;
}