/*Editor: Omkar Ugale
Time : .  13th April 2022 */
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
        if (n % 2 == 0)
        {
            if (n == 2)
                cout << 2 << " " << 1 << endl;
            else
            {
                cout << n - 1 << " " << n << " ";
                for (int i = 1; i <= n - 2; i++)
                    cout << i << " ";
                cout << endl;
            }
        }
        else
        {
            if (n == 1 || n == 3)
                cout << "-1" << endl;
           else{ cout << 2 << " " << 4 << " " << 5 << " " << 1 << " " << 3 << " ";
            int s = 7;
            while (s <= n)
            {
                cout << s << " " << s - 1 << " ";
                s += 2;
            }
            cout << endl;}
        }
    }
    return 0;
}