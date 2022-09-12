/* Editor: Omkar Ugale
DATE - 06-Jul-2022 TIME - 19:57:25*/
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
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
            continue;
            else if(s[i-1]=='1'&&s[i]=='0'&&i>0)
            {
                ans++;
            }

        }
        cout << ans << endl;
    }
    return 0;
}