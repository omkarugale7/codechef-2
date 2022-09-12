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
        int n, x;
        cin >> n >> x;
        if (n % 2)
        {
            int a = (n - 1) / 2;
            for (int i = x-a; i <= a + x; i++)
                cout << i << " ";
            cout << endl;
        }
        else
        {
            int a =  (n) / 2;
            for (int i = x-a; i < x; i++)
                cout << i << " ";
            for (int i = x+1; i <=a+x; i++)
                cout << i << " ";
            cout << endl;

        }
    }
    return 0;
}