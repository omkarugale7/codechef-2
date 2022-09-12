/* Editor: Omkar Ugale
Time : . 11th May 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        if (arr[0] > x || arr[n - 1] < x)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}