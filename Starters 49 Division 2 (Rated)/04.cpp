/* Editor: Omkar Ugale
DATE - 27-Jul-2022 TIME - 20:39:53*/
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr.begin(), arr.end());
        int prefixsum[n] = {0};
        prefixsum[0] = arr[0];
        for (int i = 1; i < n; i++)
            prefixsum[i] = prefixsum[i - 1] + arr[i];
        int sum = 0, cnt = 0;
        if (arr[0] == arr[n - 1])
        {
            cout << 0 << endl;
            continue;
        }
        for (int i = n - 1; i >= 0; i--)
        {
            sum += arr[i];
            cnt++;
            if ((arr[i - 1] * (i)) - prefixsum[i - 1] <= sum)
            {
                cout << cnt << endl;
                break;
            }
        }

        // PrintArr(arr);
    }
    return 0;
}