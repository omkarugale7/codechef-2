#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int arr[n];
        int k = n - 1;
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (k >= i )
                z++;
            if (i == 0)
                arr[i] += (int)s[i];
            if (!z)
                arr[i] = arr[i - 1] + (int)s[i];
            else
            {
                arr[i] = arr[i - 1] + z * (int)s[i];
            }
            k--;
        }
    }
    return 0;
}