// C++ program to display all permutations
// of an array using STL in C++

#include <bits/stdc++.h>
using namespace std;

// Function to display the array
void display(int a[], int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
        x ^= abs(a[i] - (i + 1));
    }
    cout << "    " << x << endl;
    if (x == 0)
    {
        cout << "aaaaaaaaaaaaaaaaaaaaaa0" << endl;
        return;
    }
}

// Function to find the permutations
void findPermutations(int a[], int n)
{

    // Sort the given array
    sort(a, a + n);

    // Find all possible permutations
    cout << "Possible permutations are:\n";
    do
    {
        display(a, n);
    } while (next_permutation(a, a + n));
}

// Driver code
int main()
{

    int a[] = {1, 2, 3,4,5 };

    int n = sizeof(a) / sizeof(a[0]);

    findPermutations(a, n);

    return 0;
}
