#include <bits/stdc++.h>

using namespace std;

int main () {
  int t;
  cin >> t;
  while(t--)
  {
    int n = 3;
    vector<vector<char>> board(n, vector<char>(n));
    for(auto &i : board)
    {
      for(auto &j : i)
      {
        cin >> j;
      }
    }

    char ans = '.';

    if(board[0][0] == board[0][1] && board[0][1] == board[0][2])
    {
      if(board[0][0] != '.')
        ans = board[0][0];
    }
     if(board[1][0] == board[1][1] && board[1][1] == board[1][2])
    {
      if(board[1][0] != '.')
        ans = board[1][0];
    }
     if(board[2][0] == board[2][1] && board[2][1] == board[2][2])
    {
      if(board[2][0] != '.')
        ans = board[2][0];
    }
     if(board[0][0] == board[1][0] && board[1][0] == board[2][0])
    {
      if(board[0][0] != '.')
        ans = board[0][0];
    }
     if(board[0][1] == board[1][1] && board[1][1] == board[2][1])
    {
      if(board[0][1] != '.')
        ans = board[0][1];
    }
     if(board[0][2] == board[1][2] && board[1][2] == board[2][2])
    {
      if(board[0][2] != '.')
        ans = board[0][2];
    }
     if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
      if(board[0][0] != '.')
        ans = board[0][0];
    }
     if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
      if(board[0][2] != '.')
        ans = board[0][2];
    }

    if(ans == '.')
      cout << "DRAW" << endl;
    else
      cout << ans << endl;

  }
}