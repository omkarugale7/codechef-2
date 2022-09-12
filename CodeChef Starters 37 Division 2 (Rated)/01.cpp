/* Editor: Omkar Ugale
Time : . 4th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans +=ceil(arr[i] * 1.0 / x);
        }
        cout<<min(ans,arr[n-1])<<endl;
    }

    return 0;
}