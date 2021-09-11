#include <iostream>
#include "bit_operations.cpp"
using namespace std;

int main()
{
#ifndef Sumit
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, i;
    cin >> n >> i;
    Bit a;
    cout << a.get_bit(n, i) << endl;
    cout << a.set_bit(n, i) << endl;
    cout << a.clear_bit(n, i) << endl;
    cout << a.update_bit(n, i, 0) << endl;

    return 0;
}