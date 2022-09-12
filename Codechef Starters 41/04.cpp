/* Editor: Omkar Ugale
DATE - 01-Jun-2022 TIME - 20:35:06*/
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
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        map<int, vector<int>> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]].push_back(i);
        }
        int ans = 0;
        for (auto it : m)
        {
            sort(it.second.begin(),it.second.end());
        }
    }
    return 0;
}