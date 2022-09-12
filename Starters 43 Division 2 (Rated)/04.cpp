/* Editor: Omkar Ugale
DATE - 15-Jun-2022 TIME - 22:10:22*/
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
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if ((i & j) == 0)
                    cout << i << " " << j << " " << (i & j) << endl;
            }
        }
    }
    return 0;
}