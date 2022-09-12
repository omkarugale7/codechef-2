/* Editor: Omkar Ugale
DATE - 20-Jul-2022 TIME - 19:55:32*/
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
        cin>>s;
        int ones = 0 ;
        for (int i = 0; i < n; i++)
        {
           if(s[i]-'0'==1)
           {
               ones++;
           } 
        }
        int zeroes = n - ones;
        if(zeroes>=ones)
        for (int i = 0; i < zeroes; i++)
        cout<<0;
        else
        for (int i = 0; i < ones; i++)
        cout<<1;
        cout<<endl;
        
        
    }
    return 0;
}