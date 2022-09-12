/* Editor: Omkar Ugale
DATE - 26-May-2022 TIME - 20:18:21*/
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
        n--;
        int ans = n / 5;
        ans*=2;
        if(n%5==0)
        ans;
        else if (n % 5 <4)
            ans++;
        else if(n%5==4)
        ans+=2;
        cout << ans << endl;
    }
    return 0;
}