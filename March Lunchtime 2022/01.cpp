/*Editor: Omkar Ugale
Time : . 19th march 2022 */
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
        int odd = 0, even = 0, k;
        bool evenhai = false, oddhai = false;
        if (n % 2 == 0)
        {
            n/=10;
            while (n)
            {
                k = n % 10; 
                if (k % 2 == 0)
                {
                    evenhai = true;
                    break;
                }
                n /= 10;
            }
            if (evenhai)
                cout << "YES" << endl;
        }
        else
        {
            n/=10;
            while (n)
            {
                k = n % 10; 
                if (k % 2)
                {
                    oddhai = true;
                    break;
                }
                n /= 10;
            }
            if (oddhai)
                cout << "YES" << endl;
        }
        if (!evenhai && !oddhai)
            cout << "NO" << endl;
    }
    return 0;
}