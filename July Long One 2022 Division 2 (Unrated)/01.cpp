/* Editor: Omkar Ugale
DATE - 11-Jul-2022 TIME - 10:20:14*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll maxT, maxN, maxS;
        cin >> maxT >> maxN >> maxS; 
        cout<<min((((maxS) / maxN) * (maxN)*maxN + (maxS % maxN) * (maxS % maxN)),( maxT * maxN * maxN))<<endl;
    }
    return 0;
}