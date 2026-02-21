#include <iostream>
#include <vector>
using namespace std;
bool isSafe(int srcx, int scry, int newx, int newy, int ratmaze[][4], int row, int col, vector<vector<bool> > &visited)
{
    // Cases in which the rat is  not safe to move :->
    // Index out of Bounds ho gaya ho
    // blocked path which has 0
    //  Already visisted hai
    if ((ratmaze[newx][newy] == 1) && (newx >= 0 && newx < row) && (newy >= 0 && newy < col) && visited[newx][newy] == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void printAllpath(int ratmaze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool> > &visited)
{
    //  Base Case
    // If the rat has reached his destination
    if (srcx == row - 1 && srcy == col - 1)
    {
        cout << output << " ";
        return;
    }
    // UP
    int newx = srcx - 1;
    int newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, ratmaze, row, col, visited))
    {
        // mark visisted
        visited[newx][newy] = true;
        // recursion call
        printAllpath(ratmaze, row, col, newx, newy, output + 'U', visited);
        // backtracking
        visited[newx][newy] = false;
    }

    // DOWN
    newx = srcx + 1;
    newy = srcy;
    if (isSafe(srcx, srcy, newx, newy, ratmaze, row, col, visited))
    {
        // mark visisted
        visited[newx][newy] = true;
        // recursion call
        printAllpath(ratmaze, row, col, newx, newy, output + 'D', visited);
        // backtracking
        visited[newx][newy] = false;
    }
    // RIGHT
    newx = srcx;
    newy = srcy + 1;
    if (isSafe(srcx, srcy, newx, newy, ratmaze, row, col, visited))
    {
        // mark visisted
        visited[newx][newy] = true;
        // recursion call
        printAllpath(ratmaze, row, col, newx, newy, output + 'R', visited);
        // backtracking
        visited[newx][newy] = false;
    }
    // LEFT
    newx = srcx;
    newy = srcy - 1;
    if (isSafe(srcx, srcy, newx, newy, ratmaze, row, col, visited))
    {
        // mark visisted
        visited[newx][newy] = true;
        // recursion call
        printAllpath(ratmaze, row, col, newx, newy, output + 'L', visited);
        // backtracking
        visited[newx][newy] = false;
    }
}
int main()
{
    int ratmaze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 1, 0},
        {1, 1, 1, 1},
    };
    int row = 4;
    int col = 4;
    int srcx = 0;
    int srcy = 0;
    string output = " ";
    // 2 D Array named visited , create this inorder to save rat to go in infinite loop
    vector<vector<bool> > visited(row, vector<bool>(col, false));
    if (ratmaze[0][0] == 0)
    {
        // that means the source position of rat is 0 or source position of rat is blocked so rat cant move anywhere
        cout << "No Path exits :(" << endl;
    }
    else
    {
        visited[srcx][srcy] = true;
        printAllpath(ratmaze, row, col, srcx, srcy, output, visited);
    }
    return 0;
}