/*Editor: Omkar Ugale
Time : .  16th April 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll ones = 0;
        map<int,int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 1)
                ones++;
            if (arr[i] == 1 || arr[i] == 2)
                s[arr[i]]++;
        }
       ll k = 0;
        for (auto it : s)
        {
            if (it.second > 1)
                k += ((it.second- 1)*(it.second))/2;
        } 
            cout << ones * (n - ones) + k << endl;  
    }
    return 0;
}