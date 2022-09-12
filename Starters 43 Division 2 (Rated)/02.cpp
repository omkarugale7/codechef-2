/* Editor: Omkar Ugale
DATE - 15-Jun-2022 TIME - 20:28:48*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int lcm(int a, int b)
{
    return (a * b) / __gcd(a, b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // for (int i = 1; i < n; i++)
        // {
        //     for (int j = 1; j < n; j++)
        //     {
        //         if (i + j == n&&(__gcd(i, j) + lcm(i, j)==n))
        //         {
        //             cout << i << " " << j << " " << __gcd(i, j) << " " << lcm(i, j) << " " << __gcd(i, j) + lcm(i, j) << endl;
        //         }
        //     }
        // }
        int ans = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n%i == 0 && n / i == i)
                ans += 1;
            else if (n % i == 0)
                ans += 2;
        }
        ans*=2;
        if (n % 2 == 0)
            ans--;
        cout << ans << endl;
    }
    return 0;
}