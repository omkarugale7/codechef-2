/* Editor: Omkar Ugale
DATE - 20-Jul-2022 TIME - 20:08:52*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a % 2 && b % 2 == 0)
        cout<<b<<endl;
        else if(a%2==0&&b%2)
        cout<<a<<endl;
        else if(a%2==0&&b%2==0)
        cout<<0<<endl;
        else
        cout<<a+b-1<<endl;
    }
    return 0;
}