//  Function to find the length of character Array
#include <iostream>
#include <string.h>
using namespace std;
int Length_Char_Array(char ch[], int n)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        if (ch[i] == '\0')
        {
            break;
        }
        else
        {
            length++;
        }
    }
    return length;
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int len = Length_Char_Array(ch, 100);
    cout << "The length of Character array ch is : " << len << endl;
    cout << "Printing length : " << strlen(ch) << endl;
    return 0;
    
}