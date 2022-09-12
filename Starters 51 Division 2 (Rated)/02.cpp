/* Editor: Omkar Ugale
DATE - 10-Aug-2022 TIME - 20:09:55*/
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
        // vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        int i = 1;

        while (i <= n / 2)
        {
            cout << n - i + 1 << " " << i << " ";
            i++;
        }
        if (n % 2)
        {
            cout << i << endl;
        }
        else
        cout<<endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}