#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(-1);
    v.push_back(4);
    v.push_back(31);
    v.push_back(-81);
    v.push_back(-20);
    cout << "min : " << *min_element(v.begin(), v.end()) << endl;
    cout << "max : " << *max_element(v.begin(), v.end()) << endl;
}