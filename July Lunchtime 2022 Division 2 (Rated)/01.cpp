/* Editor: Omkar Ugale
DATE - 17-Jul-2022 TIME - 19:56:53*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}

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
        int cnt = 0;
        bool haikya = true;
        for (int i = 0; i < n; i++)
        {
            if (!isVowel(s[i]))
                cnt++;
            else
            {
                cnt = 0;
            }
            if (cnt > 3)
            {
                haikya = false;
                break;
            }
        }
        if(haikya)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}