#include <iostream>
#include "tictactoe.cpp"
#include <Windows.h>
using namespace std;

int main() {
  TicTacToe game = TicTacToe("Fatfat 1", "Fatfat 2");
  game.menu();

  return 0;
}
