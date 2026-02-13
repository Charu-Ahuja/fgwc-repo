//  We have to print the sum of n natural numbers using recursion
#include <iostream>
using namespace std;
int Sum_Numbers(int n){
    //  Base Case 
    if(n == 1){
        return 1 ;
    }
    int sum = n + Sum_Numbers(n - 1) ;
    return sum ;
}
int main()
{
    int n ;
    cout<<"Enter the value of n : "<<" ";
    cin>> n ;
    int myans = Sum_Numbers(n) ;
    cout<<"The sum of "<<n<<" terms is : "<<myans<<endl ;
    return 0;
}