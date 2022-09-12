/* Editor: Omkar Ugale
DATE - 24-Aug-2022 TIME - 20:11:51*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
void PrintArr(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
}
int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int qx1 = 0, qy1 = 0, qx2 = 0, qy2 = 0, qx3 = 0, qy3 = 0;
        if (x == 1 && y == 1)
            qx1 = 2, qy1 = 3;
        else if (x == 1, y == 8)
            qx1 = 2, qy1 = 6;
        else if (x == 8 && y == 1)
            qx1 = 7, qy1 = 2;
        else if (x == 8, y == 8)
            qx1 = 7, qy1 = 6;
        else if (x == 1)
        {
            qx1 = 2;
            if (y == 7)
                qy1 = 5;
            else
                qy1 = y + 2;
        }
        else if (x == 8)
        {
            qx1 = 7;
            if (y == 7)
                qy1 = 5;
            else
                qy1 = y + 2;
        }
        else if (y == 1)
        {
            qy1 = 2;
            if (x == 7)
                qx1 = 5;
            else
                qx1 = x + 2;
        }
        else if (y == 8)
        {
            qy1 = 7;
            if (x == 7)
                qx1 = 5;
            else
                qx1 = x + 2;
        }
        else if (x == 2 && y == 2)
            qx1 = 1, qy1 = 3, qx2 = 3, qy2 = 4, qx3 = 4, qy1 = 1;
        else if (x == 2 && y == 6)
            qx1 = 1, qy1 = 5, qx2 = 3, qy2 = 4, qx3 = 4, qy3 = 8;
        else if (x == 6 && y == 2)
            qx1 = 5, qy1 = 1, qx2 = 6, qy2 = 4, qx3 = 8, qy3 = 4;
        else if (x == 6 && y == 6)
            qx1 = 5, qy1 = 8, qx2 = 6, qy2 = 5, qx3 = 8, qy3 = 5;
        else
            qx1 = x - 1, qy1 = y - 2, qx2 = x + 1, qy2 = y - 2, qx3 = x + 1, qy3 = y + 2;
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                if (i == x && j == y)
                    cout << 1 << " ";
             else   if (i == qx1 && j == qy1)
                    cout << 2 << " ";
                else if (i == qx2 && j == qy2)
                    cout << 2 << " ";
               else if (i == qx3 && j == qy3)
                    cout << 2 << " ";
                else
                    cout << 0 << " ";
            }
            cout << endl; 
        }
    }
    return 0;
}