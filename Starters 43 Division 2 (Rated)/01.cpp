/* Editor: Omkar Ugale
DATE - 15-Jun-2022 TIME - 19:56:54*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n == 1 && x == 1)
            cout << 'a' << endl;
        else if ((n + 1) / 2 < x)
            cout << "-1" << endl;
        else
        {
            char arr[26];
            char t = 'a';
            for (int i = 0; i < 26; i++)
            {
                arr[i] = t++;
            }
            if (n % 2 == 0)
            {
                vector<char> v(n);
                for (int i = 0; i < n / 2; i++)
                {
                    v[i] = arr[i % x];
                    v[n - i - 1] = arr[i % x];
                }
                for (auto it : v)
                    cout << it;
                cout << endl;
            }
            else
            {
                vector<char> v(n);
                for (int i = 0; i < n / 2; i++)
                {
                    v[i] = arr[i % x];
                    v[n - i - 1] = arr[i % x];
                }
                v[((n + 1) / 2) - 1] = arr[x-1];
                for (auto it : v)
                    cout << it;
                cout << endl;
            }
        }
    }
    return 0;
}