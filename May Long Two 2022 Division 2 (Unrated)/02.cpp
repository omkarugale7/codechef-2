/* Editor: Omkar Ugale
DATE - 20-May-2022 TIME - 18:33:42*/
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
        int i = 0, cnt = 0, j = n - 1;
        while (i <= j)
        {
            if (s[i] != s[j])
                cnt++;
            i++, j--;
        }
        cout  << ceil(cnt*1.0 / 2) << endl;
    }
    return 0;
}