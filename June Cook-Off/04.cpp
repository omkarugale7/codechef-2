/* Editor: Omkar Ugale
DATE - 05-Jun-2022 TIME - 20:49:04*/
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
        vector<ll> arr(n);
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2)
                temp++;
        }
        int bits[32] = {0};
        vector<ll> v = arr;
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (arr[i] > 0)
            {
                if (arr[i] % 2)
                    bits[j]++;
                arr[i] /= 2;
                j++;
            }
        }
        bool haikya = false;
        for (int i = 0; i < 32; i++)
        {
            if (bits[i] > 1)
            {
                temp = i;
                haikya = true;
                break;
            }
        }
        if (!haikya)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            cout << bits[temp] << endl;
            int k = 1ll << temp;
            vector<int> q;
            for (int i = 0; i < n; i++)
            {
                if (v[i] & k)
                    q.push_back(i+ 1);
            }
            int start = 1 ;
            cout << start << " " << q[0] << endl;
            for (int i = 1; i < q.size() - 1; i++)
            {
                cout << q[i - 1] + 1 << " " << q[i] << endl;
            }
            cout << q[q.size() - 2] + 1 << " " << n << endl;
        }
        // if (temp > 1)
        // {
        //     cout << temp << endl;
        //     int i = 0;
        //     while (temp--)
        //     {

        //         for (i; i < n; i++)
        //         {
        //             if (arr[i] % 2 && temp != 0)
        //             {
        //                 cout << arr[i] << endl;
        //                 break;
        //             }
        //             else if (arr[i] % 2 && temp == 0)
        //             {
        //                 cout << arr[i] << " ";
        //                 break;
        //             }

        //             cout << arr[i] << " ";
        //         }
        //         for (i; i < n; i++)
        //             cout << arr[i] << " ";
        //     }
        //     cout << endl;
        // }
        // else
        // {
        //     vector<int> temp = arr;
        //     int k = 0;
        // }
    }
    return 0;
}