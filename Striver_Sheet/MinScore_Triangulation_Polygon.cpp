#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &values, int i, int j)
{
    int result = INT_MAX;
    // Base Case
    // You 3 vertices to make a triangle
    if ((j - i) + 1 < 3)
    {
        return 0;
    }
    for (int k = i + 1; k < j; k++)
    {
        int wt = (values[i] * values[j] * values[k]) + solve(values, i, k) + solve(values, k, j);
        result = min(wt, result);
    }
    return result;
}
int minscoreTriangulation_Polygon(vector<int> &values)
{
    int n = values.size();
    int i = 0;
    int j = n - 1;
    return solve(values, i, j);
}
int main()
{
    return 0;
}