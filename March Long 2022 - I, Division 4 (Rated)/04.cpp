#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll correct = x / 3, wrong = 0, notattempted = 0, total = 0;
        bool possible = true;
        if (x > n * 3)
            possible = false;
        else if (correct <= n)
        {
            int rem = x % 3;
            if (rem == 2)
            {
                correct++;
                wrong++;
                total = correct + wrong;
                if (total > n)
                    possible = false;
                else
                {
                    notattempted = n - total;
                }
            }
            else if (rem == 1)
            {
                correct++;
                wrong += 2;
                total = correct + wrong;
                if (total > n)
                    possible = false;
                else
                {
                    notattempted = n - total;
                }
            }
            else if (rem == 0)
            {
                total = correct + wrong;
                notattempted = n - total;
            }
        }
        else
            possible = false;
        if (!possible)
        {
            cout << "NO" << endl;
            // cout << correct << " " << wrong << " " << notattempted << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << correct << " " << wrong << " " << notattempted << endl;
        }
    }
    return 0;
}