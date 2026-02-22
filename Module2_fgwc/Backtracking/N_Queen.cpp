#include <iostream>
#include <vector>
using namespace std;

// Check if safe to place queen
bool isSafe(vector<string> &board, int row, int col, int n)
{

    // check column
    for (int i = 0; i < row; i++)
    {
        if (board[i][col] == 'Q')
            return false;
    }

    // check upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    // check upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 'Q')
            return false;
    }

    return true;
}


void solve(int row, vector<string> &board,
        vector<vector<string> > &ans, int n)
{

    // base case
    if (row == n)
    {
        ans.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++)
    {

        if (isSafe(board, row, col, n))
        {

            board[row][col] = 'Q'; 

            solve(row + 1, board, ans, n);

            board[row][col] = '.'; 
        }
    }
}

int main()
{

    int n = 4;

    vector<string> board(n, string(n, '.'));
    vector<vector<string> > ans;

    solve(0, board, ans, n);

    // print solutions
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Solution " << i + 1 << ":\n";
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j] << endl;
        }
        cout << endl;
    }

    return 0;
}