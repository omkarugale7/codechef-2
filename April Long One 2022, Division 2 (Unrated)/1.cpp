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
        int a, b;
        cin >> a >> b;
        bool milgaya = false;
        int i = a, j = a + 1;
        int ans1 = 0 , ans2 = 0,minn=INT_MAX;
        for (int i = a; i <= b; i++)
        {
            for (int j = i + 1; j <= b; j++)
            {
                if (__gcd(i, j) > 1)
                {
                    cout<<i<<" "<<j<<endl;
                    milgaya = true;
                     if(i+j<minn)
                     ans1 = i , ans2 = j,minn=i+j;
                }
            } 
        }
        if (!milgaya)
            cout << "-1" << endl;
            else 
            cout<<ans1<<" "<<ans2<<endl;
    }
    return 0;
}