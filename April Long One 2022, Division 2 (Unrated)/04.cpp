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
    int j = 3;
    for (int i = 1; i < n; i++)
    {
        cout << "a - 1  b - 3  c - " << i;
        cout << " xor is 1^3 - " << (k ^ j) << " 3^" << i << " - " << (j ^ i) << " 1^" << i << " - " << (k ^ i);
        cout << " sum - " << (k ^ j) + (i ^ j) + (k ^ i) << endl;
    }
    return 0;
}