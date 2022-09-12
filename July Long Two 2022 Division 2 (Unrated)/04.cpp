/* Editor: Omkar Ugale
DATE - 24-Jul-2022 TIME - 01:05:51*/
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
        int n;
        cin >> n;
        vector<int> arr(n, 0);
        // map<int, int> m;
        // set<int> s;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        // sort(arr, arr + n);
        vector<int> copy = arr;
        sort(copy.begin(), copy.end());

        int k = 0;
        vector<int> left;
        vector<int> right;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == copy[k])
            {
                k++;
                left.push_back(arr[i]);
            }
            else
            {
                right.push_back(arr[i]);
            }
        }
        for (int i = 0; i < right.size(); i++)
        {
            left.push_back(right[i]);
        }
        bool sahihaikya = true;
        for (int i = 0; i < n; i++)
        {
            // cout<<left[i]<<" ";
            if(copy[i]!=left[i])
            {
                sahihaikya = false;
                break;
            }
        }
        if(sahihaikya)
            cout << "YES" << endl; 
        else
            cout << "NO" << endl;
        
        
        // PrintArr(arr);
    }
    return 0;
}