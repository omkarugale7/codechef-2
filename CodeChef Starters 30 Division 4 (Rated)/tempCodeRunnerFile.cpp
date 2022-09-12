/*Editor: Omkar Ugale
Time : . 13th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                ans++;
                k -= arr[i];
            }
            else if (arr[i] > k)
            {
                if (arr[i] / 2 < k)
                {
                    ans++;
                }
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}