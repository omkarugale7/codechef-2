/* Editor: Omkar Ugale
Time : . 10th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, m;
        cin >> a >> b >> m;
        cout << min(min(abs(a - b), a + m - b),b+m-a) << endl;
    }
    return 0;
}