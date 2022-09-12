#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        bool mila = false;
        for (int i = 1; i <= sqrt(x); i++)
        {
            if (x % i == 0)
            {
                if (i <= n && x/i < n)
                {
                    cout << i << " " << x / i << endl;
                    mila = true;
                    break;
                }
            }
        }
        if (mila)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}