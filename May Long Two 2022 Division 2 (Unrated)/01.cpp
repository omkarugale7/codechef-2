/* Editor: Omkar Ugale
DATE - 20-May-2022 TIME - 17:36:01*/
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
        int bitsarr[32] = {0};
        for (int i = 0; i < n; i++)
        {
            int j = 0;
            while (arr[i] > 0)
            {
                bitsarr[j] += arr[i] % 2;
                j++, arr[i] /= 2;
            }
        }
        int ans =0;
        for (int i = 0; i < 32; i++)
        {
            // cout<<bitsarr[i]<<" ";
            if(bitsarr[i])
            ans++;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}