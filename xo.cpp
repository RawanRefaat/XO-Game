//Member-function definitions. This file contains implementations
//of the member functions prototyped in game.h
#include <iostream>
#include "game.h" //includes definition of class firstGame

using namespace std;

//class constructor to initialize the board marks properly
firstGame::firstGame(){
    mark='x';
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            board[i][j]='-'; }}
}

char firstGame::getMark(){
    return mark;
}

//to print the whole board at any given time
void firstGame::print(){
   cout << "-------------------" << endl;
   for (int i=0;i<3;i++){
       cout << "|  ";
       for (int j=0;j<3;j++){
           cout << board[i][j] << "  |  ";
      }
      cout << endl;
      cout << "-------------------" << endl;
   }
}

//this function checks if there is a win in rows, columns or in slopes
bool firstGame::checkWin(){
   if (firstGame::checkRow()|| firstGame::checkCol() || firstGame::checkSlope()){
       return true;}
   else
       {return false;}
}

//checks every row in the board for a win
bool firstGame::checkRow(){
    for (int i=0;i<3;i++){
        if (board[i][0]!='-' && board[i][0]==board[i][1] && board[i][1]==board[i][2]){
            return true;}}
    return false;
    }

//checks every column in the board for a win
bool firstGame::checkCol(){
    for (int j=0;j<3;j++){
        if (board[0][j]!='-' && board[0][j]==board[1][j] && board[1][j]==board[2][j]){
            return true;}}
    return false;
}

//checks any straight slopes in the board for a win
bool firstGame::checkSlope(){
    if (board[0][0]!='-' && ((board[0][0]==board[1][1]&&board[1][1]==board[2][2]) || (board[0][2]==board[1][1]&&board[1][1]==board[2][0]))){
        return true;}
    else
        return false;
}

//switches between the two players
void firstGame::switchPlayer(){
    if(mark == 'x')
       {mark = 'o';}
    else
       {mark = 'x';}
}

bool firstGame::markSpot(int row,int col){
    if (board[row][col]=='-' && (row >= 0) && (row < 3) && (col >= 0) && (col < 3)){
        board[row][col]=mark;
        return true;}
    return false;}

bool firstGame::full(){
    int k=0;
    for(int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            if(board[i][j]=='x' || board[i][j]=='o')
            { k++; }}}
    if (k==9)
        {return true;}
    else
        {return false;}

}

void firstGame::printWinner(){
    cout << "Player with the mark: " << mark << " Wins! Congratulations!" << endl;
}
