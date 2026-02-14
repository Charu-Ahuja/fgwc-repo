#include <iostream>
#include <vector>
using namespace std;

void findIndices(string s, int index, char target, vector<int> &ans)
{
    // Base case
    if (index == s.length())
        return;

    // Processing
    if (s[index] == target)
        ans.push_back(index);

    // Recursive call
    findIndices(s, index + 1, target, ans);
}

int main()
{
    string s = "recursion";
    char target = 'r';

    vector<int> ans;

    findIndices(s, 0, target, ans);

    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}
