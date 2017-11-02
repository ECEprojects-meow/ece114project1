/*

Current Problem:

How can I exclude the already filled elements so they cannot be overwritten, without using multiple (if else) statements...




*/

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int input(string);  //Function used inside playField[] to pick which element to change

//----------------------------------------Main----------------------------------------//
int main()
{

	string r[9];		//Round counter
						//Element reference
						//0,1,2,3,4,5,6,7,8,this last element holds error input, will always be zero.
	int playField[10] = { 0,0,0,0,0,0,0,0,0,0 }; // 0 - emtpy,  1 - X,  2 - O

		/*	Layout of playField array - starting at element [0]

		(playing field array)	(string input for r[])	 (converting r[] values for X and O)
		        0	1	2    				b1	b2	b3		     		 0/1/2	 0/1/2	 0/1/2					-/X/O	-/X/O	-/X/O
		        3	4	5   	<=>	  b4	b5	b6	    =>		 0/1/2	 0/1/2	 0/1/2		<=>		-/X/O	-/X/O	-/X/O
		        6	7	8   				b7	b8	b9		     		 0/1/2	 0/1/2	 0/1/2					-/X/O	-/X/O	-/X/O

		*/


	bool pause;

	for (int i = 0; i <= 8; i++)	//round counter rounds 1 - 9
	{
		pause = true;		//Stops the round from increasing while choice is being made

		cout << "Turn number: " << (i + 1) << endl;

		if (i % 2 == 0)			//Checks who's turn it is	*(here only for testing)*
			cout << "Player 1's turn." << endl;
		else
			cout << "Player 2's turn." << endl;

		while (pause == true)
		{

			cin >> r[i];  //User input for which box to mark

			if (i % 2 == 0)	//Will place a 1 for X in the playField for player 1
			{
								
					playField[input(r[i])] = 1; //Places 1 into array

					if (input(r[i]) != 9)
						pause = false;

					else
					{
						playField[9] = 0;
						cout << "Choose a correct box" << endl;
					}
								
			}
			else //Will place a 2 for O in the playField for player 2
			{
				
					playField[input(r[i])] = 2; //Places 2 into array

					if (input(r[i]) != 9)
						pause = false;

					else
					{
						playField[9] = 0;
						cout << "Choose a correct box" << endl;
					}
				
			}

			if (i > 4)  //Checkpoint, possible winner
			{
				//Check for win conditions
			}

			if (i == 8) //Game ends after 9 rounds
				break;

		}

	}

	for (int i = 0; i <= 9; i++) //Displays the elements of the array 	*(here only for testing)*
	{
		cout << playField[i] << " ";
	}

	return 0;
}


//----------------------------------------Input----------------------------------------//
int input(string box) //Function used inside playField[] to pick which element to change
{
	int bNum;
	if (box == "b1")
		bNum = 0;
	else if (box == "b2")
		bNum = 1;
	else if (box == "b3")
		bNum = 2;
	else if (box == "b4")
		bNum = 3;
	else if (box == "b5")
		bNum = 4;
	else if (box == "b6")
		bNum = 5;
	else if (box == "b7")
		bNum = 6;
	else if (box == "b8")
		bNum = 7;
	else if (box == "b9")
		bNum = 8;
	else
		bNum = 9;
	
	return bNum;
}
