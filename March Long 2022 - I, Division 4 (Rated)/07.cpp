#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll mod = 998244353;
ll destroyed(string s)
{
    ll n = s.size();
    ll ans = 0;
    ll k = 0;
    // cout<<s<<endl;
    for (int i = 0; i < n; i++)
    {
        k = (((k*2)%mod) + (s[i] - '0'))%mod;
        // cout << k << " ";
    }
    // cout << endl;
    return k;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll arr[n];
        arr[0] = s[0] - '0';
        for (int i = 1; i < n; i++)
        {
            if (s[i] - '0')
                arr[i] = arr[i - 1] + i + 1;
            else
                arr[i] = arr[i - 1];
        }
        ll k = n * (n + 1) / 2;
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            ll ones = arr[i];
            ll zeroes = k - ones;
            zeroes %= 2;
            if (ones % 2 == 1)
                ans += '1';
            else
                ans += '0';
        }
        // reverse(ans.begin(), ans.end());
        cout << destroyed(ans) << endl;
    }
    return 0;
}