/* Editor: Omkar Ugale
DATE - 18-Jun-2022 TIME - 20:23:35*/
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
        int ans = 0, minni = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (minni < arr[i])
            {
                minni = arr[i];
                ans = i;
            }
        }
        if (n == 1)
            cout << "Mike" << endl;
        else if ((ans + 1) % 2)
            cout << "Mike" << endl;
        else
            cout << "Joe" << endl;
    }
    return 0;
}