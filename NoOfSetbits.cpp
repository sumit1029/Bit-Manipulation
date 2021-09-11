#include <iostream>
using namespace std;

int NoOfSet_bits(int n)
{
    int count = 0;
    while (n)
    {
        count += 1;
        n = (n & (n - 1));
    }
    return count;
}

int main()
{
#ifndef Sumit
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;
    cout << n << " has " << NoOfSet_bits(n) << " set bits" << endl;

    return 0;
}