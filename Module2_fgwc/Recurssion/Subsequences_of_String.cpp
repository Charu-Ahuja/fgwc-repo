// abc
//{},a,b,c,ab,ac,bc,abc
#include <iostream>
#include <vector>
using namespace std;
void printSubsequences(string &s, int i, string &path)
{
    if (i >= s.length())
    {
        cout << path << endl;
        return;
    }
    // skip the current character
    printSubsequences(s, i + 1, path);
    // take the current character
    path += s[i];
    printSubsequences(s, i + 1, path);
    path.pop_back();
}
int main()
{
    string s;
    cin >> s;
    string path = "";
    printSubsequences(s, 0, path);
}