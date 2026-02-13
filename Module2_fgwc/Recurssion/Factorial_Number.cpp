#include <iostream>
using namespace std;
int factorial(int n)
{
    // Base Cae or the condition where my function has to stop calling itself
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // Recurssive call
    int Rec_Ans = factorial(n -1) ;
    //  Processing 
    int ans = n * Rec_Ans ;
    return ans ;
}
int main()
{
    int n;
    cout << "Enter the value of n , for which u wish to find the factorial : " << endl;
    cin >> n;
    cout << "Factorial of " << n << " is : " << factorial(n) << endl;
    return 0;
}