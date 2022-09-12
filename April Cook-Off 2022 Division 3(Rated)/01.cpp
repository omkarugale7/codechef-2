/*Editor: Omkar Ugale
Time : .  2nd April 2022 */
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
        cin>>n;
       string s;
       cin>>s;
       bool haikya = false;
       for (int i = 0; i <s.size(); i++)
       {
           if((s[i]-'0')%5==0)
           {
               haikya=true;
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