#include <iostream>
using namespace std;
char findKthBit(int n, int k)
{
    //  Base Case
    if (n == 1)
    {
        return 0;
    }
    // Processing
    int length = pow(2, n) - 1;
    // Logic + Recursive Call
    if (k < ceil(length / 2))
    {
        return findKthBit(n - 1, k);
    }
    else if (k == ceil(length / 2))
    {
        return '1';
    }
    else
    {
        char ch = findKthBit(n - 1, length - (k - 1));
        if (ch == '1')
            return '0';
        else
        {
            return '1';
        }
    }
}
int main()
{
    return 0;
}