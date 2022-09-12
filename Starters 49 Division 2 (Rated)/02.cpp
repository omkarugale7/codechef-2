/* Editor: Omkar Ugale
DATE - 27-Jul-2022 TIME - 20:17:55*/
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
        int a[n];
        vector<int> freq;
        map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            m[a[i]]++;
        }
        vector<int> temp;
        for (auto it : m)
            temp.push_back(it.second);
        sort(temp.begin(), temp.end());
        if (temp.size() == 1)
            cout << ceil(temp[temp.size() - 1] * 1.0 / 2) << endl;
        else
        {
            int k = ceil(temp[temp.size() - 1] * 1.0 / 2);
            cout<<max(k,temp[temp.size()-2])<<endl;
        }

        // PrintArr(arr);
    }
    return 0;
}