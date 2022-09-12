/* Editor: Omkar Ugale
DATE - 10-Jun-2022 TIME - 20:44:33*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int k = abs(a - b);
        int cnt = 0;
        for (int i = 1; i <= sqrt(k); i++)
        {
            if (k % i == 0)
                cnt++;
        }
        cnt *= 2 ;

        if (floor(sqrt(k)) == sqrt(k))
            cnt--;
        cout << cnt << endl;
    }
    return 0;
}