#include <iostream>
using namespace std;


int main() {
  char play_field[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
  bool taken[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < 9; i++) {
    int boxNum;
    bool error = false;

    if (i % 2 == 0)		//Checks who's turn it is	*(here only for testing)*
      cout << "Player 1's turn: " << endl;
    else
      cout << "Player 2's turn: " << endl;

    cout << "Please choose one box from 1 to 9: ";

    cin >> boxNum;

    while (!error) {
      if (boxNum == 1 || boxNum == 2 || boxNum == 3 || boxNum == 4 || boxNum == 5 || boxNum == 6 || boxNum == 7 || boxNum == 8 || boxNum == 9) {
            if (!(taken[boxNum - 1])) {
              if (i % 2 == 0)		//Checks who's turn it is	*(here only for testing)*
                play_field[boxNum - 1] = 'X';
              else
                play_field[boxNum - 1] = 'O';
              taken[boxNum - 1] = 1;
              error = true;
            }
            else {
              cout << "Box has been taken. Choose another box: ";
              cin >> boxNum;
            }
        }

        else {
              cout << "Invalid value. Please choose a box from 1 to 9: ";
              cin >> boxNum;
            }


      }

      cout << "***********************************" << endl;
      cout << "            " << play_field[0] << " | " << play_field[1] << " | " << play_field[2] << endl;
      cout << "            " << play_field[3] << " | " << play_field[4] << " | " << play_field[5] << endl;
      cout << "            " << play_field[6] << " | " << play_field[7] << " | " << play_field[8] << endl;
      cout << "***********************************" << endl;
      cout << "***********************************" << endl;

  }
  return 0;
}
