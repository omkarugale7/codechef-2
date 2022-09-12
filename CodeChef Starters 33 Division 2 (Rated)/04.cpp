/*Editor: Omkar Ugale
Time : .  6th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int mex(int n, int arr[])
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i)
            return i;
    }
    return n;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        string s, t;
        cin >> s >> t;
        int i = 0, j = 0;
        while (i < m && j < n)
        {
            if (s[i] == '?')
            {
                if (t[j] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
            else if (s[i] == t[j])
            {
                i++, j++;
            }
            else
            {
                i++;
            }
        }
        if (j < n)
            cout << s << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}