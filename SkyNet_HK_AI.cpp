// SkyNet_HK_AI.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int searchGridHighNumber = 64;
int searchGridLowNumber = 0;
int attempts = 0;//making a counter for tries


int main()
{
	srand(static_cast<unsigned int>(time(0))); //seeding a random number
	int human_scum = rand() % 64 + 0;//i guess this is how to apply arguements for rand function
	int HK_guess = rand() % 64 + 0;//the added AI guess portion 
	int human_guess;//integer variable for the player's guess
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 0;
	int guess = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;//the equation
	cout << "The enemy is hiding at grid " << human_scum;
	guess;//do the equation
	++attempts;//counting the attempts
	
 
	do//do while loop for the player to guess
	{
		cout << "Guess where your human scum is hiding!\n";
		cin >> human_guess;//player's guess
		++attempts;//counting the players guesses
		if (human_guess == human_scum)//if player guesses right
		{//how many times it took for player to get the answer
		cout << "The foolish Human took " << ++attempts << " tries to find the Human Scum!\n";
		}
	} while (human_guess != human_scum);//do this while the player guesses wrong

		if (guess < human_scum)
		{//if the guess is too low, redo guess starting at 1 number above the guess
			searchGridLowNumber = guess + 1;//resetting the grid low number based on the guess
			cout << "SkyNet guessed enemy location at " << HK_guess << "\n";
			cout << "SkyNet HK searching for human scum\n";
			cout << "Target location estimate of " << guess << " was too low.\n";//say the equation guess was too low
			cout << "new searchGridLowNumber = " << searchGridLowNumber << "\n";//new low grid range number
		}
		else if (guess > human_scum)
		{//if the guess is too high, redo guess starting at 1 number below the guess
				searchGridHighNumber = guess - 1; //resetting the grid low number based on the guess
				cout << "SkyNet guessed enemy location at " << HK_guess << "\n";
				cout << "Skynet HK searching for human scum\n";
				cout << "Target location estimate of " << guess << " was too high.\n";//equation guess was too high
				cout << "new searchGridHighNumber = " << searchGridHighNumber << "\n";//setting new high grid range number
		}
		else if (guess = human_scum)//if the guess is correct, print the following
		{
				cout << "SkyNet HK found enemy at grid #" << human_scum << "\n";
				cout << "SkyNet HK Software found enemy in " << attempts << " attempts\n";
			
		}
	do//another do while loop
	{
		HK_guess;//getting random number for AI
		++attempts;//counting each random AI guess
		if (HK_guess = human_scum)//if AI's random guess is right
		{
			cout << "SkyNet HK using Random search found enemy at " << human_scum << "in " << attempts << " tries\n";
		}
	} while (HK_guess != human_scum);//do this as long as AI random guess is wrong
	system("pause");
	return 0;
}


