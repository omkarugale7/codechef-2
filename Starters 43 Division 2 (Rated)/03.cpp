/* Editor: Omkar Ugale
DATE - 15-Jun-2022 TIME - 21:07:47*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
            cin >> arr[i];
        sort(arr, arr + 3);
        int k = arr[2] - arr[0] + arr[2] - arr[1];
        // cout<<k<<endl;
        if (((k + 1) & k) == 0)
            cout << "YES" << endl;
        else
        {
            int a = 1;
            while (a < k)
            {
                a *= 2;
            }
            a--;
            if(a==k)
            a++,a*=2,
            // cout<<a<<endl;
            cout<<a<<" "<<k<<endl;
            if((a-k)%3==0)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}