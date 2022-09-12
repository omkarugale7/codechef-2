/*Editor: Omkar Ugale
Time : .  30th March 2022 */
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
        if (a <= b)
            cout << a << endl;
        else 
            cout << 2 * a - b << endl; 
    }
    return 0;
}