/*Editor: Omkar Ugale
Time : . 13th march 2022 */
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x1, x2, y1, y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;
        if ((x1 + y1) % 2 == (x2 + y2) % 2)
        {
            int arr[n + 1][m + 1];
            if ((x1 + y1) % 2 == 0)
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= m; j++)
                    {
                        if (i % 2)
                        {
                            if (j % 2)
                                arr[i][j] = 1;
                            else
                                arr[i][j] = 2;
                        }
                        else
                        {
                            if (j % 2)
                                arr[i][j] = 2;
                            else
                                arr[i][j] = 1;
                        }
                    }
                }
            }
            else
            {
                for (int i = 1; i <= n; i++)
                {
                    for (int j = 1; j <= m; j++)
                    {
                        if (i % 2)
                        {
                            if (j % 2)
                                arr[i][j] = 2;
                            else
                                arr[i][j] = 1;
                        }
                        else
                        {  if (j % 2)
                                arr[i][j] = 1;
                            else arr[i][j] = 2;
                        }
                    }
                }
            }
            arr[x2][y2] = 2;
            if (x2 > 1)
            arr[x2 - 1][y2] = 3;
            if (x2 < n)
            arr[x2 + 1][y2] = 3;
            if (y2 > 1)
            arr[x2][y2 - 1] = 3;
            if (y2 < m)
            arr[x2][y2 + 1] = 3;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= m; j++)
                {
                    if ((i + j) % 2 == (x1 + y1) % 2)
                        cout << "1 ";
                    else
                        cout << "2 ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}