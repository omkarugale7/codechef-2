/* Editor: Omkar Ugale
DATE - 11-Sep-2022 TIME - 10:50:49*/
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
        map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        int ans = 0;
        for(auto it:m)
        {
            ans+=(it.second*(it.second-1)/2);
        }
        cout<<ans<<endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}