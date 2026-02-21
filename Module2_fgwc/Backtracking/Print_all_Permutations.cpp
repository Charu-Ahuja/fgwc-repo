// Time Complexity -> O(n * n!) , as Printing a string of length n takes:O(n) and there are total n ! permutations
//  Space Complexity -> O(n) , recursive depth of the tree 
#include <iostream>
using namespace std;
void printPermutation(string &str, int index)
{
    int n = str.length();
    if (index >= n)
    {
        cout << str << " ";
        return;
    }
    // logic
    for (int j = index; j < n; j++)
    {
        swap(str[index], str[j]);

        //  Recursive Call
        printPermutation(str, index + 1);
        // Backtracking -> In order to maintain the orignal string while making recursive call as we have taking string by reference
        swap(str[index], str[j]);
    }
}
int main()
{
    string str = "abc";
    int index = 0;
    printPermutation(str, index);
    return 0;
}