/*Editor: Omkar Ugale
Time : . 13th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i]; 
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            int gcd = 0;
            for (int i = a -1; i < b; i++)
            {
                for (int j = i + 1; j < b; j++)
                {
                    gcd = max(gcd, __gcd(arr[j], arr[i]));
                }
            }
            cout << gcd << endl;
        }
    }
    return 0;
}