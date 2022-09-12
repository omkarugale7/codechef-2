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
        int n;
        cin >> n;
        int k = n / 2;
        int i = 1;
        while (i < k)
        {
            i *= 2;
        }
        i /= 2;
        int thrd = k - i;
        if (n % 2)
            cout << "-1" << endl;
        else if ((n & (n - 1)) == 0)
            cout << "-1" << endl;
        else
            cout << k << " " << i << " " << thrd << endl;
    }
    return 0;
}