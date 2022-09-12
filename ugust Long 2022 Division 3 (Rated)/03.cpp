/* Editor: Omkar Ugale
DATE - 12-Aug-2022 TIME - 17:48:15*/
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
        n--;
        vector<int> arr(n, 0);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
    }
    return 0;
}