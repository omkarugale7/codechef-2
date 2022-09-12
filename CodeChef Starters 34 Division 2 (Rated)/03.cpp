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
        string s;
        cin >> s;
        if (n % 2)
        {
            cout<<"NO"<<endl;
            continue;
        }
        int ones = 0, zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
            else
                zeros++;
        }
        int cnt = abs(zeros - ones) / 2;
        if (cnt == 0)
        {
            cout << "YES" << endl;
            cout << 1 << " " << n << endl;
            continue;
        }
        bool ansmilakya = false;
        int start = 0, end = 0, i = 0, ans = 0;
        if (zeros > ones)
            for (i = 0; i < n; i++)
            {
                if (ans == 0 && s[i] == '1')
                    continue;
                if (ans == 0 && s[i] == '0')
                {
                    start = i;
                }
                if (s[i] == '0')
                {
                    // cout << "yahaaaya" << endl;
                    ans++;
                }
                else
                    ans--;
                if (ans == cnt)
                {
                    cout << "YES" << endl;
                    ansmilakya = true;
                    cout << start + 1 << " " << i + 1 << endl;
                    break;
                }
            }
        else
        {
            for (i = 0; i < n; i++)
            {
                if (ans == 0 && s[i] == '0')
                    continue;
                if (ans == 0 && s[i] == '1')
                {
                    start = i;
                }
                if (s[i] == '1')
                {
                    // cout << "yahaaaya" << endl;
                    ans++;
                }
                else
                    ans--;
                if (ans == cnt)
                {
                    cout << "YES" << endl;
                    ansmilakya = true;
                    cout << start + 1 << " " << i + 1 << endl;
                    break;
                }
            }
        }
        if (!ansmilakya)
            cout << "NO" << endl;
    }

    return 0;
}