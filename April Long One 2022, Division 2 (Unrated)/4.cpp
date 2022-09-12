/*Editor: Omkar Ugale
Time : .  18th March 2022 */
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        cout << "a - 0  b - 1  c - " << i << " xor is " << (k ^ i) << " sum - 1 + " << i << " + " << (k ^ i)<<" = "<<1+i+(k^i) << endl;
    }
    return 0;
}