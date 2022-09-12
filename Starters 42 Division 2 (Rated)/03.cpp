/* Editor: Omkar Ugale
DATE - 08-Jun-2022 TIME - 20:37:51*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int setbits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}
int getLastTwoKiPowerWalaNumber(int n)
{
    int cnt = 0;
    while (n)
    {
        n /= 2;
        cnt++;
    }
    return (1ll << (cnt - 1));
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k >> n;
        priority_queue<int> pq;
        pq.push(n);
        while (k > 0 && pq.top() > 1)
        {
            int temp = pq.top();
            pq.pop();
            cout << k << " " << temp << endl;
            pq.push(getLastTwoKiPowerWalaNumber(temp) - 1);
            pq.push(temp - getLastTwoKiPowerWalaNumber(temp) - 1);
            k--;
        }
        int ans = 0, sz = pq.size();
        while (sz--)
        {
            cout << pq.top() << endl;
            ans += setbits(pq.top());
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}