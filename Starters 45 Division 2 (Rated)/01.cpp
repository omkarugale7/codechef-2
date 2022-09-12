/* Editor: Omkar Ugale
DATE - 29-Jun-2022 TIME - 19:39:41*/
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    cout << "Enter Two Numbers" << endl;
    int a, b;
    cin >> a >> b;
    cout << "Enter 1 for addition" << endl;
    cout << "Enter 2 for subtraction" << endl;
    int choice;
    cin >> choice;
    if (choice == 1)
    {
        cout << "Sum is " << a + b << endl;
    }
    else if (choice == 2)
    {
        cout << "Difference is " << a - b << endl;
    }
    else
    {
        cout << "Invalid Choice" << endl;
    }

    return 0;
}