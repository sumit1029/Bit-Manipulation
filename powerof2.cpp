#include <iostream>
using namespace std;

bool PowerOfTwo(int n)
{
    if (!n)
        return false;
    if ((n & (n - 1)))
        return false;
    return true;
}

int main()
{
#ifndef Sumit
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    if (PowerOfTwo(n))
    {
        cout << n << " is a power of 2" << endl;
    }
    else
    {
        cout << n << " is not a power of 2" << endl;
    }

    return 0;
}