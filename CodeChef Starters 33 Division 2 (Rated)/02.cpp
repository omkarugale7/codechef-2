/*Editor: Omkar Ugale
Time : .  6th April 2022 */
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
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int ans = 0, i = 0;
        for (i = 0; i < sum; i++)
        {
            if (((i * (i + 1)) / 2) > sum)
            {
                break;
            }
            else
                ans = i;
        }
        cout << ans << endl;
    }
    return 0;
}