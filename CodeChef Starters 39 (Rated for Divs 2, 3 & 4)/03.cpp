/* Editor: Omkar Ugale
Time : . 18th May 2022 */
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
        if (n == 1)
        {
            cout << "5\n6\n";
            continue;
        }
        int a = 5, b = 6;
        int arr[n];
        int brr[n];
        if (n % 2)
        {

            for (int i = 0; i < n - 1; i++)
            {
                cout << a << " ";
                i++;
                cout << b << " ";
                a += 4;
                b += 4;
            }
            cout << a << endl;
            a += 4, b += 4; 
            for (int i = 0; i < n - 1; i++)
            {
                cout << a << " ";
                i++;
                cout << b << " ";
                a += 4;
                b += 4;
            }
            cout << a << endl;
            cout << endl;
            continue;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            i++;
            cout << b << " ";
            a += 4;
            b += 4;
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
            i++;
            cout << b << " ";
            a += 4;
            b += 4;
        }
        cout << endl;
    }
    return 0;
}