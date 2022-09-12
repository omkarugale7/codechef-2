/* Editor: Omkar Ugale
DATE - 10-Jun-2022 TIME - 20:06:00*/
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
        if (abs(a - b) % 3 == 0)
            cout << "YES" << endl;
        else if (abs(a - b) % 3 == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}