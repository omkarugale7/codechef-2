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
        map<int, int> mapppp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mapppp[a]++;
        }
        int a = 0;
        int o1 = 0, t2 = 0, t3 = 0;
        for (auto it : mapppp)
        {
            if (it.second % 4 == 1)
                o1++;
            else if (it.second % 4 == 2)
                t2++;
            else if (it.second % 4 == 3)
                t3++;
        }
        a =a+ t3;
        a += o1; 
        if ((o1+ t2) % 2)
            a += 2;
        cout << a << endl;
    }
    return 0;
}