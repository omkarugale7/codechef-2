/* Editor: Omkar Ugale
DATE - 01-Jun-2022 TIME - 20:19:32*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n , p;
        cin>>n>>p;
        if(n%2==0)
        cout<<"YES"<<endl;
        else if(n%2 && p==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;


    }
    return 0;
}