#include <iostream>	
#include <stdlib.h>	
#include <time.h>	
using namespace std;	
//This code is by Tejash Panda, from Period 1 of Mr. Galbraith class

int main()	
{	
  char playAgain = 'y';	
  cout << "welcome to guessing game!" << endl;	

  do{	// a while loop for generating the number every time the user wants to play again
    int x;	
    int guess;	
    int tries = 0;	

    srand(time(NULL));	//seed generator
    x = rand() % 101;	//x is the random number generated by the computer

    do{	
      cout << "please enter your guess between 1 and 100." << endl;	
      tries++;	
      cin >> guess;	
      if (guess > x)	//checks if the guess is too high or too low
      {	
	cout << "your guess is too high." << endl;	
      }	
      if (guess < x)	
      {	
	cout << "your guess is too low." << endl;	
      }	
    }while (guess != x);	

    cout << "you guessed my mystery number in " << tries << " tries!" << endl;	
    cout << "do you want to play again?" << endl;	
    cin >> playAgain; 	
  }while (playAgain == 'y');	//check if the player wants to play again
}	
