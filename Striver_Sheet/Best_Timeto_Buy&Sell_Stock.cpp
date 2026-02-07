#include <iostream>
#include <climits>
using namespace std;

void Buy_Sell_Stocks(int arr[], int n)
{
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }

    cout << "Maximum Profit: " << maxProfit << endl;
}

int main()
{
    int arr[5] = {7, 6, 4, 3, 1};
    int n = 5;
    Buy_Sell_Stocks(arr, n);
    return 0;
}
