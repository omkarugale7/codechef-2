/* Editor: Omkar Ugale
Time : . 2nd May 2022 */
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
        int ones = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i])
                ones++;
            else
                zeroes++;
        }
        ones >= zeroes ? cout << 1 << endl : cout << 0 << endl;
    }
    return 0;
}