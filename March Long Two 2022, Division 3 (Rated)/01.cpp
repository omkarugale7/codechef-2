/*Editor: Omkar Ugale
Time : .  27th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
void solve()
{
    int arr[4];
    for (int i = 0; i < 4; i++)
        cin >> arr[i];
    sort(arr, arr + 4);
    for (int i = 0; i < 4; i++)

    {
        for (int j = 0; j < 4; j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < 4; k++)

            {
                if (i == k || j == k)
                    continue;
                for (int l = 0; l < 4; l++)
                {
                    if (i == l || j == l || k == l)
                        continue;
                    else
                    {
                        if ((arr[i] + arr[j]) % 2)
                            continue;
                        int a = (arr[i] + arr[j]) / 2;
                        int b = arr[i] - a;
                        if (a < 1 || a > 1e4 || b < 1 || b > 1e4)
                                continue;
                        if ((a * b == arr[k]) && (a / b == arr[l]))
                        {
                            
                            // cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << endl;
                            cout << a << " " << b << endl;
                            return;
                        }
                    }
                }
            }
        }
    }
    cout << "-1 -1" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}