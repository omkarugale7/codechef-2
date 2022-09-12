/* Editor: Omkar Ugale
DATE - 25-Jun-2022 TIME - 11:26:36*/
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
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        int gcdd = __gcd(arr[0], arr[1]);
        for (int i = 2; i < n; i++)
        {
            gcdd = __gcd(gcdd, arr[i]);
        }
        // cout << "gcd" << gcdd << endl;
        if (gcdd == 1)
        {
            if (m.size() == 2)
            {
                if (m.begin()->second == 1 || next(m.begin(), 1)->second == 1)
                    cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
        else
            cout << n << endl;
    }
    return 0;
}