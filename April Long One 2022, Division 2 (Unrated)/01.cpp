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
        if (b - a <= 1)
            cout << "-1" << endl;
       else if (a % 2 && (b - a >= 3))
        {
            if (a % 3 == 0)
                cout << a << " " << a + 3 << endl;
            else
                cout << a + 1 << " " << (a + 3) << endl;
        }
        else if ((b - a >= 2) && (a % 2 == 0))
            cout << a << " " << a + 2 << endl;
        else 
            cout << "-1" << endl;
        // if ((a % 3 == 0) && (a % 2 != 0) && (b >= a + 3))
        //     cout << a << " " << a + 3 << endl;
        // else if (b - a < 2)
        //     cout << "-1" << endl;
        // else if (a % 2 && (b >= a + 3))
        //     cout << a + 1 << " " << (a + 3) << endl;
        // else
        //     cout << a << " " << a + 2 << endl;
    }

    return 0;
}