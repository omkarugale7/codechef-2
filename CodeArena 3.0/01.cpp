/* Editor: Omkar Ugale
DATE - 11-Jul-2022 TIME - 21:04:37*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int temp;
        if (n < k)
        {
            cout << n << endl;
            continue;
        }
        if (n > k)
            temp = n - k;
        else
            temp = 0;
        int ans = k - ceil(temp * 1.0 / 3);
        if (ans < 0)
            ans = 0;
        cout << ans << endl;
    }
    return 0;
}
