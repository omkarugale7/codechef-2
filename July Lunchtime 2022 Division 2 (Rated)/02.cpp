/* Editor: Omkar Ugale
DATE - 17-Jul-2022 TIME - 20:03:59*/
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
        map<char, vector<int>> even;
        map<char, vector<int>> odd;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                even[s[i]].push_back(i);
            else
                odd[s[i]].push_back(i);
        }
        bool haikya = true;
        for (int i = 0; i < n; i++)
        {
            if (odd[s[i]].size() != even[s[i]].size())
            { 
                haikya = false;
                break;
            }
        }
        if (haikya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}