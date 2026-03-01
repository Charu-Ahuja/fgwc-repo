#include <iostream>
using namespace std;
int solve(int Dices, int Faces, int target)
{
    // Base Case
    if (target < 0)
    {
        return 0;
    }
    if (Dices == 0 && target != 0)
    {
        return 0;
    }
    if (target == 0 && Dices != 0)
    {
        return 0;
    }
    if (target == 0 && Dices == 0)
    {
        return 1;
    }
    // Otherwise
    int ans = 0;
    for (int i = 1; i < Faces; i++)
    {
        ans = ans + solve(Dices - 1, Faces, target - i);
    }
    // The answer returned here is the number ofdistinct ways in which u can achieve the target sum upon rolling n dices with k faces 
    return ans;
}
int numberOfDiceRolls(int n, int k, int target)
{
    return solve(n, k, target);
}
int main()
{
    return 0;
}