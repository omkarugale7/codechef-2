#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int k = n;
        int z = n;
        n /= 2;
        while (n--)
        {
            cout << k << " ";
            cout << 2 * k << " "; 
            k--;
        }
        if (z % 2)
            cout << k;
        cout << endl;
    }
    return 0;
}