/*Editor: Omkar Ugale
Time : .  30th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
bool ascend(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
        return a.first> b.first;
    return a.second < b.second;
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int brr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        cin >> brr[i];
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
        a[i] = make_pair(arr[i], brr[i]);
    sort(a, a + n, ascend);
    int ans[n] = {0};
    int cnt = 0;
    if (a[0].second == 0)
        ans[0] = a[0].first;
    else
    {
        cout << 0 << endl;
        return;
    }
    int sum = a[0].first;
    for (int i = 1; i < n; i++)
    {
        if (cnt >= a[i].second)
        {
            sum += a[i].first;
            ans[i] = (sum + a[i].first) / cnt;
            cnt++;
        }
        else
            break;
    }
    sort(ans, ans + n);
    cout << ans[n - 1] << endl;
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