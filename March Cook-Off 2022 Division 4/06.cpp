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
        if (n % 2 == 0)
        {
            if (n == 2)
                cout << 1 << " " << 2 << endl;
            else if (n == 4)
                cout << "1 2 3 6" << endl;
            else
            {
                cout << "1 2 3 6" << endl;
                int k = (n / 2)-2;
                int i = 4;
                while (k--)
                {
                    cout << i << " " << i * 2 << " ";
                    i++;
                }
            }
        }
    }
    return 0;
}