/*Editor: Omkar Ugale
Time : .  23th March 2022 */
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
        int k = 1;
        int cnt = 0;
        while (k <= n)
        {
            k *= 2;
            cnt++;
        }
        cout<<n-cnt<<endl;
    }
    return 0;
}