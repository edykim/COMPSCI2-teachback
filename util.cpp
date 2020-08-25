#include <iostream>
#include "util.h"

using namespace std;

void PrintElements(const vector<string>& data)
{
  for (string item : data) cout << item << endl;
}

void PrintTicTacToe(const vector<vector<string>>& board)
{
  const char space = ' ';
  const char separator = '|';
  for (vector<string> row : board)
  {
    cout << separator;
    for (string value : row)
    {
      if (value == "")
      {
        cout << string(3, space);
      }
      else
      {
        cout << space << value << space;
      }
      cout << separator;
    }
    cout << endl;
  }
}
