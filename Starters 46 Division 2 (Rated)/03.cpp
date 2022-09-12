/* Editor: Omkar Ugale
DATE - 06-Jul-2022 TIME - 20:51:47*/
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != i + 1)
                v.push_back(abs((i + 1) - arr[i]));
        }
        int a = v[0];
        int gc;
        for (int i = 1; i < v.size(); i++)
        {
            gc = __gcd(a, v[i]);
            a = gc;
        }
        cout<<gc<<endl;
    }
    return 0;
}