/* Editor: Omkar Ugale
DATE - 11-Jul-2022 TIME - 10:40:48*/
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
        ll arr[n];
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            cnt+=arr[i];
        }
        ll temp = arr[0]*n;
        sort(arr, arr + n);
        if (arr[0] % 2)
            cout << "CHEF" << endl;
        else
            cout << "CHEFINA" << endl;
    }
    return 0;
}