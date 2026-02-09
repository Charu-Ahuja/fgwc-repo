#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int> > arr(5, vector<int>(7, 1));
    int m = arr.size();
    int n = arr[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
