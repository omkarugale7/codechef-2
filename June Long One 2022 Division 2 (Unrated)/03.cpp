/* Editor: Omkar Ugale
DATE - 10-Jun-2022 TIME - 20:24:18*/
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
        if (n % 2)
        {
            int k = (n + 1) / 2;
            int j = 1;
            for (int i = 0; i < n / 2; i++)
            {
                cout << k << " " << k - j << " ";
                j += 2, k++;
            }
            cout << n << endl;
        }
        else
        {
            int k = n / 2;
            int j = 1;
            for (int i = 0; i < n / 2; i++)
            {
                cout << k << " " << k + j << " ";
                k--, j += 2;
            }
            cout << endl;
        }
    }
    return 0;
}