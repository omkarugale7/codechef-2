/* Editor: Omkar Ugale
DATE - 17-Jul-2022 TIME - 21:47:53*/
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
        string init, final;
        cin >> init >> final;
        bool initmaihaikya = false, finalmaihaikya = false;
        for (int i = 0; i < n; i++)
        {
            if (init[i] == '1')
            {
                initmaihaikya = true;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (final[i] == '1')
            {
                finalmaihaikya = true;
                break;
            }
        }
        if (!initmaihaikya && finalmaihaikya)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}