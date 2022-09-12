/* Editor: Omkar Ugale
Time : . 18th May 2022 */
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
        int ans =0;
        for (int i = 1; i < n; i++)
        {
            if(arr[i]==arr[i-1])
            ans++;
        }
        cout<<n-ans<<endl;
        
    }
    return 0;
}