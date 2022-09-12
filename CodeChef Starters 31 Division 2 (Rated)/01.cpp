// /*Editor: Omkar Ugale
// Time : .  20th March 2022 */
// #include <bits/stdc++.h>

// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n , x;
//         cin>>n>>x;
//         cout<<2*n-(x-1)<<endl;
//     }
//     return 0;
// }
/*Editor: Omkar Ugale
Time : .  23 th March 2022 */
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
        int ones = 0, zeroes = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] - '0')
                ones++;
            else
                zeroes++;
        }
        int k = min(ones,zeroes);
        int ans = k + min(max(ones,zeroes),k+1);
        cout<<ans<<endl;
    }
    return 0;
}
// /*Editor: Omkar Ugale
// Time : .  23 th March 2022 */
// #include <bits/stdc++.h>

// using namespace std;
// typedef long long int ll;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         string s;
//         cin >> s;
//         int ones = 0, zeroes = 0;
//         for (int i = 0; i < n; i++)
//         {
//             if (s[i] - '0')
//                 ones++;
//             else
//                 zeroes++;
//         }
//         int k = min(ones,zeroes);
//         int ans = k + min(max(ones,zeroes),k+1);
//         cout<<ans<<endl;
//     }
//     return 0;
// }