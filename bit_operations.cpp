#include <iostream>
using namespace std;

class Bit
{
public:
    //Function to obtain the bit at a given position
    int get_bit(int n, int i)
    {
        return ((n & (1 << i)) != 0);
    }

    //Function to set 1 at a given position
    int set_bit(int n, int i)
    {
        return (n | (1 << i));
    }

    //Function to set 0 at a given position
    int clear_bit(int n, int i)
    {
        int temp = (1 << i);
        return (n & (~temp));
    }

    //Function to update bit with 0 or 1 at a given position
    int update_bit(int n, int i, int x)
    {
        n = clear_bit(n, i);
        if (x == 1)
            return set_bit(n, i);
        return n;
    }
};