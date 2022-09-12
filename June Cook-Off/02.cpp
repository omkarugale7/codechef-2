/* Editor: Omkar Ugale
DATE - 05-Jun-2022 TIME - 20:24:43*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n,x;
       cin>>n>>x;
       if(n%2 && x%2==0)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;

    }
    return 0;
}