/*Editor: Omkar Ugale
Time : .  9th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int temp = arr[0], cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] == temp)
                cnt++;
            else
            {
                pq.push(cnt);
                cnt = 1;
                temp = arr[i];
            }
        }
        pq.push(cnt);
        // cout<<pq.size()<<endl;
        if (pq.size() == 1)
        {
            pq.pop();
            int j = (n - k) / (k + 1);
            pq.push(j);
            // cout<<pq.top()<<endl;
            while (k--)
            {
                pq.push(j);
                pq.push(1);
                // cout<<pq.top()<<endl;
            }
            if (((n - k) % (k + 1)) > 0)
                pq.push((n - k) % ((k + 1)));
            // while (!pq.empty())
            // {
            //     cout << pq.top() << " ";
            //     pq.pop();
            // }
            // cout << endl;
            int ans = 0;
            while (!pq.empty())
            {
                int y = pq.top();
                ans += (y * (y + 1)) / 2;
                pq.pop();
            }
            cout << ans << endl;
        }
        else
        {
            while (k-- && !pq.empty())
            {
                int j = pq.top();
                pq.pop();
                int i = pq.top();
                int div = j / (i + 1);
                int g = div;
                while (div--)
                {
                    pq.push(i);
                    pq.push(1);
                }
                pq.push(j - g * (i + 1));
            }
            int ans = 0;
            while (!pq.empty())
            {
                int y = pq.top();
                ans += (y * (y + 1)) / 2;
                pq.pop();
            }
            cout << ans << endl;
        }
    }
    return 0;
}