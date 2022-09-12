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
        int temp = 0, ans = 0, n = s.size();
        char start = s[0], end = s[n - 1];
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == start || s[i] == end)
            {
                ans=max(ans,temp);
                temp = 0;
            }
            else
            {
                temp++;
            }

        }
                ans=max(ans,temp);
        if(!ans)
        cout<<"-1"<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}