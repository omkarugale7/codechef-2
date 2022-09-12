/* Editor: Omkar Ugale
DATE - 15-Jun-2022 TIME - 22:39:16*/
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
        int arr[n] = {0};
        int brr[n] = {0};
        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << endl;
        }
        else if (n % 2)
            cout << "-1" << endl;
        else if (n == 2)
        {

            cout << "1 2" << endl;
            cout << "2 1" << endl;
        }
        else if (n == 4)
        {

            cout << "1 2 3 4" << endl;
            cout << "2 1 4 3" << endl;
        }
        else if (n == 6)
        {

            cout << "1 2 3 4 5 6" << endl;
            cout << "6 5 4 3 2 1" << endl;
        }

        else
        {
            for (int i = 1; i <= n; i++)
                arr[i - 1] = i;
            int a = 4;
            while (a < n)
            {
                a *= 2;
                brr[a - 1] = a - 1;
                brr[a - 2] = a;
            }
            a--;
            int k = abs(n - a);
            cout << a << " " << k << endl;
            for (int i = n - 1; i >= 0; i--)
            {
                if (!brr[i])
                {
                    brr[i] = k;
                }
                k++;
                if (k > n)
                    k = 1;
            }
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
            cout << endl;
            for (int i = 0; i < n; i++)
                cout << brr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}