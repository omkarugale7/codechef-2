/*Editor: Omkar Ugale
Time : .  2nd April 2022 */
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
        ll leftkarr[n];
        for (int i = 0; i < n; i++)
            cin >> leftkarr[i];
       ll rightkaarr[n];
        for (int i = 0; i < n; i++)
            cin >> rightkaarr[i];
        ll sum =0;
        for (int i =1; i <n; i++)
        {
            sum+=min(leftkarr[i],rightkaarr[i-1]);
        }
        cout<<sum<<endl;
        

    }
    return 0;
}