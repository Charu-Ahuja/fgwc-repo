#include <iostream>
#include <vector>
using namespace std;
void printDigits(int num, vector<int> &ans)
{
    //  Base Case
    if (num == 0)
    {
        return;
    }
    // Processing
    int digit = num % 10;
    num = num / 10;
    // Recursive Call
    printDigits(num, ans);
    ans.push_back(digit);
}
int main()
{
    int num = 4217;
    vector<int> ans;
    printDigits(num, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout <<ans[i]<<endl ;
    }
    return 0;
}