/* Editor: Omkar Ugale
DATE - 01-Jun-2022 TIME - 20:10:49*/
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
        if (a <= b)
            cout << b - a << endl;
        else
            cout << ((a - b+1) / 2) + ((a - b) % 2) << endl;
    }
    return 0;
}