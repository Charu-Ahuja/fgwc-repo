#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
void Reverse_String(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
int main()
{
    char ch[20];
    cin.getline(ch, 20);
    cout << "Before : " << ch << endl;
    Reverse_String(ch , 20) ;
    cout << "After : " << ch << endl;
    return 0;
}