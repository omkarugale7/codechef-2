/* Editor: Omkar Ugale
DATE - 17-Jul-2022 TIME - 20:54:43*/
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
        int brr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
            cin >> brr[i];
        sort(arr, arr + n);
        sort(brr, brr + n);
        int ans[n / 2 + 1];
        int k = 0,j=n-1;
        for (int i = (n / 2); i < n; i++)
        {
            ans[k++] = arr[i] + brr[j--];
        }
        sort(ans,ans+(n/2 +1));
        cout<<ans[0]<<endl;
    }
    return 0;
}