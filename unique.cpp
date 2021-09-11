#include <iostream>
using namespace std;

int UniqueNo(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }
    return result;
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

    cout << UniqueNo(arr, n) << endl;

    return 0;
}