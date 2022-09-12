/* Editor: Omkar Ugale
DATE - 27-Jul-2022 TIME - 20:31:31*/
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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zero++;
        }
        one = n - zero;
        cout << ceil(((max(one, zero)-min(one,zero))*1.0) / k) << endl;

        // map<int, int> m;
        // set<int> s; 
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}