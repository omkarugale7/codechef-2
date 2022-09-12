/* Editor: Omkar Ugale
DATE - 05-Jun-2022 TIME - 20:02:04*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll l, r;
        cin >> l >> r;
        if (l % 2 == 0 )
            cout << l << " " << l + 1 << " " << l + 2 << " " << l + 3 << endl;
        else if (l % 2 && (r - l) >= 4)
            cout << l + 1 << " " << l + 2 << " " << l + 3 << " " << l + 4 << endl;
        else 
        cout<<"-1"<<endl;
    }
    return 0;
}