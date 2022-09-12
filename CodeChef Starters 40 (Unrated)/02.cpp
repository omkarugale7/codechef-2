/* Editor: Omkar Ugale
DATE - 26-May-2022 TIME - 21:01:36*/
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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int brr[n];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i] ^ brr[i]]++;
        }
        int ans = 0;
        for (auto it : m)
        {
            ans += ((it.second * (it.second - 1)) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}