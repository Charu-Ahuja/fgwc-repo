//  To find out the 2 ^ n using Recursion
#include <iostream>
using namespace std;
int Power(int n)
{
    //  Base Case
    if (n == 0)
    {
        return 1;
    }
    int ans = 2 * Power(n - 1);
    return ans;
}
int main()
{
    int n;
    cout << "Enter the power of 2 which u wish to find out : " << endl;
    cin >> n;
    int myans = Power(n);
    cout << "The " << n << " th power of 2 is : " << myans << endl;
    return 0;
}