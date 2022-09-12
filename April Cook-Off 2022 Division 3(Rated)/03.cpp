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
        int n;
        cin >> n;
        int t1 = n;
        int fk = 0;
        while (t1)
        {
            fk += t1 % 10;
            t1 /= 10;
        }
        bool frstevennhihai = false;
        if (fk % 2)
            frstevennhihai = true;
        bool nhimilakya = true;
        int i = 1;
        while (nhimilakya)
        {
            int t2 = n + i;
            int skasum = 0;
            while (t2)
            {
                skasum += t2 % 10;
                t2 /= 10;
            }
            if (frstevennhihai && skasum % 2 == 0)
            {
                cout << n + i << endl;
                break;
            }
            else if (!frstevennhihai && skasum % 2)
            {
                cout << n + i << endl;
                // cout << temp2 << endl;
                break;
            }
            i++;
        }
    }
    return 0;
}