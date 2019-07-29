#include <iostream>

using namespace std;
/*
THE RULES OF THE GAME :
1) Players 1 selects a random number.
2) Players 2 needs to guess this number.
3) The game wil tell Player 1 whether the guess is too low or too high.
4) The game will count the number of attempts Payer 2 has made.
Enjoy
*/
int main()
{
  int numberOfAttempts = 0;
  int theNumberToGuess =0;
  int currentGuess = 0;
//We begin all the game from "0" number of attempts, number to guess and current guessed attempts.
  cout << "Welcome to the game!"<<endl<<endl;
  //We say hello to our friends.
  cout << "Player 1 - Please select a number:"<<endl;
  //Give them first instructions.
  cin >> theNumberToGuess;
  //Ask them first entry.

  //We use a "while(true)" because we don't want to end this loop, because we don't know how many attempts the Player 2 will take.
  while(true){

  cout << "Player 2 - Please guess the number:"<<endl;
  cin >> currentGuess;

  if(currentGuess>theNumberToGuess){
    cout<<"Your number is too High : try lower..."<<endl;
    //The Player 2 guessed wrong because he guessed too high.
  }
  else if(currentGuess<theNumberToGuess){
    cout<<"Your number is too Low : try higher..."<<endl;
        //The Player 2 guessed wrong because he guessed too low.
  }
  else{
    cout<<"YOU GUESSED CORRECTLY CONGRATS !!"<<endl;
    break;
    //We have to break the loop when the Player 2 has guessed correctly!
  }

  }

}