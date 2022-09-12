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
        int arr[n], zero = 0, nonzero = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i])
            nonzero++;
            else
            zero++;
        }
        cout<<max(zero,nonzero)<<endl;
    }
    return 0;
}