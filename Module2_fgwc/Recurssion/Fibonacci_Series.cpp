//  To print the Fibonacci Series
#include <iostream>
using namespace std;
int Fib(int n)
{
    //  Base Case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int ans = Fib(n - 1) + Fib(n - 2) ;
    return ans ;
}
int main()
{
    int n;
    cout << "Enter the value n : " << " ";
    cin >> n;
    int final_ans = Fib(n);
    cout << "The " << n << " th term of my fibonacci series is : " << final_ans << endl;
    return 0;
}