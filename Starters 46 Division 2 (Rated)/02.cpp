/* Editor: Omkar Ugale
DATE - 06-Jul-2022 TIME - 20:10:53*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
const map<int, int> primes;
bool prime(int n)
{
    if (n == 2)
        return true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a = 2, b, c;
        int x, y, z;
        cin >> x >> y;
        z = x^y;
        if(x%2 && y %2)
        {
             b = x ^a;
             c = y ^ a;
        }
        else if(y % 2 && z % 2)
        {
            b = y ^ a;
            c = z ^ a;
        }
        else if(z % 2 && x % 2)
        {
            b = z ^ a;
            c = x ^ a;
        }
        int arr[3] = {a,b,c};
        sort(arr, arr+3);
        cout<<""<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<endl; 
        
        
    }
    return 0;
}