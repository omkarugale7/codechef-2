    /* Editor: Omkar Ugale
    DATE - 25-Jun-2022 TIME - 11:22:04*/
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
            int ans = n / 100 + (n%100);
            if(ans>10)
            cout<<"-1"<<endl;
            else
            cout<<ans<<endl;
        }
        return 0;
    }