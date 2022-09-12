/* Editor: Omkar Ugale
DATE - 10-Jun-2022 TIME - 20:10:13*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        string aa, bb;
        cin >> aa >> bb;
        map<char, int> m;
        for (int i = 0; i < a; i++)
        {
            if(aa[i]!=bb[i])
            m[bb[i]]++;
        }
        cout<<m.size()<<endl;
    }
    return 0;
}