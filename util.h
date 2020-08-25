#include <string>
#include <vector>

using namespace std;

struct Student
{
  string name;
  int age;
};

/**
 * Print all strings from given parameters.
 * 
 * @param data a vector of string
 * @return void
 */
void PrintElements(const vector<string>&);

/**
 * Print all cells in the given board as a tic tac toe format.
 * 
 * @param board a 2d vector of tictactoe
 * @return void
 */
void PrintTicTacToe(const vector<vector<string>>&);
