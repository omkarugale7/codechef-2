/*Editor: Omkar Ugale
Time : .  27th April 2022 */
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
        int arr[n];
        vector<int> odd;
        vector<int> even;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2)
                odd.push_back(a);
            else
                even.push_back(a);
        }
        vector<int> f;
        int a = min(odd.size(), even.size()), i;
        int b = abs(odd.size() - even.size());
        if (odd.size() > even.size())
            b = odd.size() - even.size();
        else
            b = even.size() - odd.size();
        // cout<<odd.size()<<" "<<even.size() <<"b "<< b << endl;
        sort(odd.begin(), odd.end(), greater<int>());
        sort(even.begin(), even.end(), greater<int>());
        // for (int i = 0; i < odd.size(); i++)
        //     cout << odd[i] << " ";
        // cout << endl;
        // for (int i = 0; i < even.size(); i++)
        //     cout << even[i] << " ";
        // cout << endl;
        for (i = 0; i < a; i++)
        {
            if (odd[0] > even[0])
            {
                f.push_back(odd[i]);
                f.push_back(even[i]);
            }
            else
            {
                f.push_back(even[i]);
                f.push_back(odd[i]);
            }
        }
        if (odd.size() > even.size())
        {
            while (b--)
            {
                f.push_back(odd[i]);
            }
        }
        else
        {
            while (b--)
            {
                // cout << "k" << endl;
                f.push_back(even[i]);
            }
        }
        for (int i = 0; i < f.size(); i++)
            cout << f[i] << " ";
        cout << endl;
        int aa = f[0], bb = f[1];
        for (int i = 2; i < n; i++)
        {
            if (i % 4 == 2)
            {
                if (i % 2)
                    aa += f[i];
                else
                    bb += f[i];
            }
            else if (i % 4 == 0)
            {
                if (i % 2 == 0)
                    aa += f[i];
                else
                    bb += f[i];
            }
        }
        cout << max(aa, bb) << endl;
    }
    return 0;
}