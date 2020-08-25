// Repositiory: 
// https://github.com/edykim/COMPSCI2-teachback

// References:
// http://www.cplusplus.com/reference/vector/vector/
// http://www.cplusplus.com/reference/array/array/?kw=array

#include <iostream>
#include <string>
#include <vector>
#include "util.h"

using namespace std;

int main()
{
  // Hello, I'm Yong. This is my teachback project in COMPSCI-2,
  // My topic is about vector.

  // I put all the source code and script on the repository.
  // if want to check it with this video,
  // You can check the url in the video or the description from the youtube page.
  
  // First, we need to quickly visit the array before the vector.
  // C++ provides built-in array which is for a sequencial data.

  // arrays
  int numbers[3] = {1, 2, 3};

  string continents[6] = {
    "Africa",
    "Asia",
    "Australia",
    "Europe",
    "North America",
    "South America"
  };

  // The limitation of array is a fixed-size sequence.
  // We should know the maximum size of the array when we uses it.
  // Some types of data can be easily predictable in terms of size
  // such as continent, country. However, some types of the data are not.

  // In that reason, C++ introduces Vector.
  // Vectors are sequence containers representing arrays that can change
  // in size according to C++ reference.

  // Vector can be defined by this format.
  // vector<T> name;

  // vector
  vector<int> prime(10);    // able to set the size
  vector<double> grades;      // a vector of size 0
  // vector<double> grades(); // error

  // with an initialization list
  vector<int> favorites = {1, 6, 7, 42, 100};
  vector<string> accountants = {"Angela", "Oscar", "Kevin"};
  vector<Student> students = {
    {.name = "Jane", .age = 32},
    {.name = "Marvin", .age = 26}
  };

  // Vector can be used with a loop.
  // This is an example for printing each element in accountants vectors.
  // You can identify the size of the vector using `size()` method.
  // You can access individual elements in vector just like an built-in array.
  for (int i = 0; i < accountants.size(); i++)
  {
    cout << accountants[i] << endl;
  }

  // if you don't need an index in your logic, you can use Range-based for loop as well.
  for (string name : accountants)
  {
    cout << name << endl;
  }

  // As I mentioned, size of vector is flexiable. The vector provides method that
  // add a new element or remove the element.
  vector<string> managers;

  managers.push_back("Michael");
  managers.push_back("Jim");
  managers.pop_back(); // remove last one
  
  // Also, you can replace it using `assign()` method or just like an array
  managers.assign(0, "Robert");
  managers[0] = "Andy";

  PrintElements(managers);

  // How about vector in vector? You can create multi-dimensional vectors as well.
  // this is an example of tic tac toe.

  // defined the board as 2 dimensional vectors.
  int SIZE = 3;
  vector<vector<string>> board(SIZE);

  for (int i = 0; i < board.size(); i++)
  {
    vector<string> row(SIZE);
    board[i] = row;
  }
  // You can create it as a function and make it returning the board for reusability.

  // Now the board can be used for tic tac toe.

  board[0][1] = "X";
  board[0][2] = "O";
  board[1][1] = "X";

  PrintTicTacToe(board);

  // vector is a powerful feature for programming especially to handle sequencial data.
  // I covered very small amount of vector and I recommand to check the cpp reference for other
  // useful methods within vectors.

  // I hope this teachback is helpful to remind the previous lectures and also
  // useful for your programming in this lecture, That's it, see you around!
  return 0;
}
