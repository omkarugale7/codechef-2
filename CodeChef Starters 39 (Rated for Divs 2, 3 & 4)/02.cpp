/* Editor: Omkar Ugale
Time : . 18th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const int mod = 1e9 +7;
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
        int ans = 1;
        vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        for (int i = 0; i < n; i++)
        {
            auto it = lower_bound(vowels.begin(), vowels.end(), s[i]);
            auto itt = it-1;
            if (abs(*it - s[i]) == abs(*itt - s[i]))
                ans = (ans%mod)*2;
            ans=ans%mod;
        }
        cout<<ans%mod<<endl;
    }
    return 0;
}