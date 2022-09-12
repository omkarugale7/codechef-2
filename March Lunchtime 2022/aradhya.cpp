/*Editor: Omkar Ugale
Time : . 19th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int odd = 0, even = 0, k;
        bool evenhai = false, oddhai = false;
        if ((s[s.size() - 1] - '0') % 2 == 0)
        {
            for (int i = 0; i < s.size() - 1; i++)
            {
                k = (s[i] - '0') % 10; 
                if (k % 2 == 0)
                {
                    evenhai = true;
                    break;
                }
            } 
        }
        if (evenhai)
            cout << "YES" << endl;
    }
    else
    {
        n /= 10;
        while (n)
        {
            k = n % 10;
            if (k % 2)
            {
                oddhai = true;
                break;
            }
            n /= 10;
        }
        if (oddhai)
            cout << "YES" << endl;
    }
    if (!evenhai && !oddhai)
        cout << "NO" << endl;
}
return 0;
}