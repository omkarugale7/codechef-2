/* Editor: Omkar Ugale
DATE - 24-Aug-2022 TIME - 19:56:24*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        vector<int> arr1(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> arr1[i];
        int sum1 = 0, sum2 = 0;
        // sort(arr.begin(), arr.end());
        // sort(arr1.begin(), arr1.end());
        for (int i = 0; i < n; i++)
            sum1 += arr[i], sum2 += arr1[i];
        int ans = 0;
        if (sum1 == sum2)
        {
            for (int i = 0; i < n; i++)
            {
                // cout<<arr[i]<<" "<<arr1[i]<<" "<<ans<<endl;
                ans += abs(arr[i] - arr1[i]);
            }
            cout << ans/2 << endl;
        }
        else
            cout << -1 << endl;

        // PrintArr(arr);
    }
    return 0;
}