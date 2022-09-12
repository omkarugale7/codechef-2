/*Editor: Omkar Ugale
Time : .  20th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        n %= 4;
        if (n == 0) 
            n = 4;
        if (!k)
        {
            if (n == 4)
                cout << "Off" << endl;
            else
                cout << "On" << endl;
        }
        else
        {
            if (n == 4)
                cout << "On" << endl;
            else
                cout << "Ambiguous" << endl;
        }
    }
    return 0;
}