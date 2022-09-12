/* Editor: Omkar Ugale
DATE - 06-Jul-2022 TIME - 21:49:11*/
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
        set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        vector<string> v;
        string temp = "";
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (!st.count(s[i]))
            {
                temp += s[i];
            }
            else
            {
                v.push_back(temp);
                temp = s[i];
            }
        }
        v.push_back(temp);
        string ans = "";
        for (int i = v.size() - 2; i >= 0; i--)
        {
            if (k % 2 == 0)
                reverse(v[i].begin(), v[i].end());
            ans += v[i];
            k++;
        }
        ans+=v[v.size()-1];
        cout << ans << endl;
    }
    return 0;
}