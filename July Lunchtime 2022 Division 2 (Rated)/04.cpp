/* Editor: Omkar Ugale
DATE - 17-Jul-2022 TIME - 21:33:59*/
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
        sort(arr, arr + n);
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt+=arr[i];
            if (cnt >= n)
                break;
            else
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}