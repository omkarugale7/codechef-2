    /* Editor: Omkar Ugale
    DATE - 01-Jun-2022 TIME - 20:30:09*/
    #include <bits/stdc++.h>

    using namespace std;
    typedef long long int ll;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            ll a, b;
            cin >> a >> b;
            if (b == 1)
            {
                if (a % 2)
                    cout << "ODD" << endl;
                else
                    cout << "EVEN" << endl;
            }
            else if (b == 2)
                cout << "ODD" << endl;
            else
                cout << "EVEN" << endl;
        }
        return 0;
    }