#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a , b;
        cin>>a>>b;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i]==b[i])
            cout<<"G";
            else
            cout<<"B";

        }
        cout<<endl;
        
    }
    return 0;
}