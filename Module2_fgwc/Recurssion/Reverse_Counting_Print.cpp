//  We have to print the counting in reverse fashion
//(n -> 1)
#include <iostream>
using namespace std;
void Reverse_Counting(int n)
{
    //  Base Case
    if (n == 0)
    {
        return;
    }
    cout<<n<<" ";
    Reverse_Counting(n -1) ;
}
int main()
{
    int n;
    cout << "Enter the value of n , from which u need to start printing numbers (reverse fashion) : " << endl;
    cin >> n;
    cout << "Reverse Counting is : " << endl;
    Reverse_Counting(n);
}