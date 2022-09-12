/*Editor: Omkar Ugale
Time : .  20th March 2022 */
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
        int ans = (n + 1) / 2;
        if (n % 2)
            ans = 0 - ans;
        cout << ans << endl;
    }
    return 0;
}