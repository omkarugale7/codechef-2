/*Editor: Omkar Ugale
Time : . 16th march 2022 */
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
        string s;
        cin >> s;
        int ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ones++;
        }
        int k = n - ones;
        while (k--)
       cout<<0;
       while (ones--)
     cout<<1;
       
        
        cout << endl;
    }
    return 0;
}