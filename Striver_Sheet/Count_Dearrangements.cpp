#include <iostream>
using namespace std;
int countDer(int n)
{
    //  Base Case
    if (n == 1)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    // Recursive Call
    int ans = (n - 1) * (countDer(n - 1) + countDer(n - 2));
    return ans;
}
int main()
{
    int n = 4;
    int output = countDer(n);
    cout << output<<endl ;
    return 0;
}