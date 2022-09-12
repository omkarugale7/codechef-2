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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int odd = 0, even = 0;
        vector<int> odde;
        vector<int> evene;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] % 2 == 0)
            {
                even++;
                evene.push_back(arr[i]);
            }
            else
            {
                odd++;
                odde.push_back(arr[i]);
            }
        }
        if (odd == 0)
            cout << "-1" << endl;
        else if (odd == 1)
            cout << "-1" << endl;
        else if (odd % 2 == 0)
        {
            for (int i = 0; i < odde.size(); i++)
                cout << odde[i] << " ";
            for (int i = 0; i < evene.size(); i++)
                cout << evene[i] << " ";
            cout << endl;
        }
        else if (odd % 2 != 0 && even > 0)
        {
            int i;
            for (i = 0; i < odde.size() - 1; i++)
                cout << odde[i] << " ";
            for (int j = 0; j < evene.size(); j++)
                cout << evene[j] << " ";
            cout << odde[i] << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}