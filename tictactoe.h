#ifndef TICTACTOE_CLASS
#define TICTACTOE_CLASS


#include <iostream>
#include <string>
#include <cstdlib>
#include <Windows.h>
using namespace std;

HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

COORD coordinate;

class TicTacToe {
public:
    TicTacToe();
    int onePlayer();
    void computerMove(int a, int b, char pF[3][3]);
    int twoPlayer();
    void menu();
    void drawBoard(string name1, string name2, int gameMode);
    void setP(int x, int y);

private:
  int gameMode[2];
  bool menuOn;
	int row, menuChoice, pause_menu;
  char pF[3][3] = { '-','-','-','-','-','-','-','-','-' };	//The array which holds the X's and O's
  int x = 12, y = 6, turn = 0, a = 0, b = 0;

  bool inGame = true, drawBoardOn = true, choice = true, pause;
  int player1Count = 0, player2Count = 0;
  string name1, name2;
};

#endif
