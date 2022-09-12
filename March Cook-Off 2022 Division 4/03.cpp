#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        if((x-y)%2)
        cout<<"Jay"<<endl;
        else
        cout<<"Janmansh"<<endl;
    }
    return 0;
}