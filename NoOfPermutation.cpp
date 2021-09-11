#include <iostream>
#include <cmath>
#include "bit_operations.cpp"
using namespace std;

Bit a;

void NoOfPermutation(int arr[], int n)
{
    for (int i = 0; i < pow(2, n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a.get_bit(i, j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
#ifndef Sumit
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    NoOfPermutation(arr, n);

    return 0;
}