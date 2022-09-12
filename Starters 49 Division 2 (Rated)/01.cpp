/* Editor: Omkar Ugale
DATE - 27-Jul-2022 TIME - 19:58:33*/
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
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);
        if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[0])
            cout << "YES" << endl;
        else if (arr[1] == arr[0] && arr[0] < arr[2])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        // cout << "YES" << endl;
    }
    return 0;
}