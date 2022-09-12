/* Editor: Omkar Ugale
DATE - 22-Aug-2022 TIME - 20:03:34*/
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
        map<int, int> m; 
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
           m[arr[i]]++;
        }
        bool  haikya=false;
        int cnt = ceil(1.0*n/2);
        for (auto it:m)
        {
            if(it.second>cnt)
            {
                haikya=true;
                break;
            }
        }
        
        if(haikya)
        cout<<"No"<<endl;
        else
        cout<<"Yes"<<endl;
        // sort(arr.begin(), arr.end());

        // PrintArr(arr);
    }
    return 0;
}