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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 6 || arr[i] == 13 || arr[i] == 20 || arr[i] == 27 || arr[i] % 7 == 0)
                continue;
            else
                ans++;
        }
        ans += 8;
        cout << ans << endl;
    }
    return 0;
}