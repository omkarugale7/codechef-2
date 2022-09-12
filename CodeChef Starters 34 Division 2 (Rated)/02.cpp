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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ones = 0, zeros = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
            else
                zeros++;
        }
        if (k % 2 == 0)
        {
            if (ones % 2)
                cout << "NO" << endl;
            else
            {
                if (ones >= k)
                    cout << "YES" << endl;
                else
                {
                    int cnt = 0;

                    for (int i = 0; i < n; i++)
                    {
                        if (s[i] == '1')
                        {
                            cnt++;
                            i++;
                            while (s[i] != '1')
                            {
                                cnt++, i++;
                            }
                            cnt++;
                        }
                    }
                    if (n - cnt < k - (ones) / 2)
                        cout << "NO" << endl;
                    else
                        cout << "YES" << endl;
                }
            }
        }
        else
        {
            if (ones % 2)
            {
                if (ones < k)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
            else
            {
                int cnt = 0;

                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '1')
                    {
                        cnt++;
                        i++;
                        while (s[i] != '1')
                        {
                            cnt++, i++;
                        }
                        cnt++;
                    }
                }
                if (n - cnt < k - (ones) / 2)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }

    return 0;
}