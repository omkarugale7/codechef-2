/* Editor: Omkar Ugale
DATE - 22-Aug-2022 TIME - 19:27:10*/
#include <bits/stdc++.h>

using namespace std;
// typedef long long int ll;
#define int long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
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
        for (int i = n; i >=1; i--)
            cout<<i<<" ";
            cout<<endl;
            
        // sort(arr.begin(), arr.end());
         
        // PrintArr(arr);
    }
    return 0;
}