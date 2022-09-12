#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < q; i++)
        {
            int l, r;
            cin >> l >> r;
            int temp = a[l - 1]%26 - (b[l - 1])%26;
            bool samehai = true;
            for (int i = l; i < r; i++)
            {
                if (a[i]%26 - (b[i])%26 != temp)
                {
                    cout << "NO" << endl;
                    samehai = false;
                    break;
                }
            }
            if (samehai)
                cout << "YES" << endl;
        }
    }
    return 0;
}