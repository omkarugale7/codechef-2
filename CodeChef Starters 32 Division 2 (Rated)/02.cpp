/*Editor: Omkar Ugale
Time : .  29th March 2022 */
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
        vector<pair<int, int>> ansss;
        int ind = 0, cnt = 0, crntkaunsachlrha = 0, temp = 0;
        for (int i = 0; i < s.size(); i++)
        {
            // cout << i << " i crntcnt "<<crntkaunsachlrha << endl;
            
            if (s[i] - '0' != crntkaunsachlrha)
            {
                temp = s[i] - '0';
                // cout << s[i] << " temp " << temp << endl;
                for (int j = i; j < s.size(); j++)
                {
                    if (temp == s[j] - '0')
                    {
                        cnt++;
                        continue;
                    }
                    else
                    {
                        ansss.push_back(make_pair(j + 1, n - j));
                        i += cnt - 1;
                        // cout << i << " i cnt " << cnt << endl;
                        cnt = 0;
                        if (crntkaunsachlrha == 1)
                            crntkaunsachlrha = 0;
                        else
                            crntkaunsachlrha = 1;
                        break;
                    }
                }
            }
        }
        cout << ansss.size() << endl;
        for (int i = 0; i < ansss.size(); i++)
            cout << ansss[i].first << " " << ansss[i].second << endl;
    }
    return 0;
}