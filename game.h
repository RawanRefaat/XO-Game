//game.h
//XO Game class definition. This file represents the public interface
//and the prototypes for the member functions.

#include <iostream>
#include <string>

using namespace std;

class firstGame{
    public:
    firstGame();//constructor
    char getMark();
    void print();//responsible for printing the board at any given time
    bool checkWin();//checks if there is a win in rows,columns or slope
    bool checkRow();//checks all rows for a win
    bool checkCol();//checks all columns for a win
    bool checkSlope();//checks any straight slope line for a win, both in the left side or the right side
    void switchPlayer();//switches between players
    bool markSpot(int row,int col); //marks a valid spot on the board
    bool full(); //checks if all the spots on the board are full
    void printWinner(); //to access the winning player's mark


    private:
    char board[3][3]; //two dimensional array to represent the board
    char mark; //will hold either X or O at any given time to represent the player's turn

};

