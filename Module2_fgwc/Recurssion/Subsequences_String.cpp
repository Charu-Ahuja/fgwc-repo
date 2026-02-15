#include <iostream>
#include <string>
using namespace std;

void func(string str, string output, int index)
{
    // base case
    if (index >= str.length())
    {
        cout << output << endl;
        return;
    }

    char ch = str[index];

    // exclude current char
    func(str, output, index + 1);

    // include current char
    output.push_back(ch);
    func(str, output, index + 1);
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    func(str, "", 0);

    return 0;
}
