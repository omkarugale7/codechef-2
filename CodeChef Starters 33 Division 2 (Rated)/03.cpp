/*Editor: Omkar Ugale
Time : .  6th April 2022 */
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
        int odds = 0, evens = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2)
                odds++;
            else
                evens++;
        }
        if (odds % 2 == 0)
            cout << min(odds / 2, evens) << endl;
        else
            cout << evens << endl;
    }
    return 0;
}