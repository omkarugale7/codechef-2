#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
            cout << "-1" << endl;
        else if (n % 2)
        {
            for (int i = n; i > 0; i--)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = n; i > 4; i--)
            {
                cout << i << " ";
            }
            cout << 4 << " " << 1 << " " << 3 << " " << 2 << endl;
        }
    }
    return 0;
}