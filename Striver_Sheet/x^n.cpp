#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter the value of base : " << endl;
    cin >> x;
    cout << "Enter the value of exponent : " << endl;
    cin >> n;
    //  To calculate x^n
    long long result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= x;
    }
    cout << "The ans for x^n : " << result << endl;
    return 0;
}