/*Editor: Omkar Ugale
Time : .  6th April 2022 */
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
        bool onehai = false, adjhai = false;
        for (int i = 0; i < n-1; i++)
        {
            if (s[i] - '0' == s[i + 1] - '0' && s[i] == '1')
            adjhai = true;
            if(s[i]=='1')
            onehai=true;
        }
            if(s[n-1]=='1')
            onehai=true;
        if(adjhai)
        cout<<"2"<<endl;
        else if(onehai)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
    return 0;
}