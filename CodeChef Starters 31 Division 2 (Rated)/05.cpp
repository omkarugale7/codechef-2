/*Editor: Omkar Ugale
Time : .  20th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        bool haikya = false;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] > i + 1)
                haikya = true;
        }
        if (haikya)
            cout << "-1" << endl;
        else
        {
            set<int> se;
            vector<int> ma(n + 1, 0);
            for (int i = 0; i <= n; i++)
            {
                se.insert(i);
            }
            for (int i = 0; i < n; i++)
            {
                if (arr[i] >=0)
                {
                    se.erase(arr[i]);
                    ma[arr[i]]++;
                }
            }
            for (int i = 0; i < n; i++)
            {
                auto it = se.begin();
                cout << *it << " ";
                se.erase(it);
                // cout<<ma[arr[i]]<<endl;
                if (arr[i] >=0)
                {
                    ma[arr[i]]--;
                    if (!ma[arr[i]])
                        se.insert(arr[i]);
                }
            }
            cout << endl;
        }
    }
    return 0;
}