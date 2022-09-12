/*Editor: Omkar Ugale
Time : .  2nd April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, aaa, bbbbbb;
        cin >> n >> aaa >> bbbbbb;
        if (abs(aaa - bbbbbb) == 1)
        {
           if ((aaa == 1 || bbbbbb == 1 )|| (aaa == n || bbbbbb == n))
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if (abs(aaa - bbbbbb) == 2)
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}