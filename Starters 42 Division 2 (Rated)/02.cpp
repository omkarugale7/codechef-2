/* Editor: Omkar Ugale
DATE - 08-Jun-2022 TIME - 20:14:57*/
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
        bool anshaikya = true;
        int minn = INT_MAX, maax = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>minn && arr[i]<maax)
            {
                anshaikya=false;
                break;
            }
            minn = min(arr[i], minn);
            maax = max(maax, arr[i]);
        }
        if(anshaikya)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}