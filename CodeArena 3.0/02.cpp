/* Editor: Omkar Ugale
DATE - 11-Jul-2022 TIME - 21:35:12*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool IsPrime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, i = 1;
        cin >> m >> n;
        if (m == 1)
            cout << i++ << " " << 1 << endl;
        if (n > 2 && m < 2)
            cout << i++ << " " << 2 << endl;
        if (m < 2)
            m = 3;
        for (int j = m; j <= n; j++)
        {
            if (IsPrime(j))
                cout << i++ << " " << j << endl;
        }
    }
    return 0;
}