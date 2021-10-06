#include <iostream>
#include "game.h" //includes definition of class firstGame
using namespace std;

//function main begins program execution
int main()
{
   int i,j,row,col;
   firstGame round;
   cout <<  "First Player: x, Second Player: o" << endl;
   do{
     round.print();
     //switch turns between the two players to place their mark on the board
     do{
        cout << "Enter a valid row and column to mark a spot:" << endl;
        cin >> i;
        row = i-1;
        cin >> j;
        col = j-1;
       }while(!round.markSpot(row,col));
     round.switchPlayer();
  }while(!round.full() && !round.checkWin());

  if (round.full() && !round.checkWin()){
       cout << "The game reached a dead end!";}
  else if (round.checkWin()){
    round.print();
    round.switchPlayer();
    round.printWinner();
    }
}
