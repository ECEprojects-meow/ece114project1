// ConsoleApplication11.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{

	string r[9];		//Round counter
					   //Element reference
					   //0,1,2,3,4,5,6,7,8
	int playField[9] = { 0,0,0,0,0,0,0,0,0 }; // 0 - emtpy,  1 - X,  2 - O

	/*	Layout of playField array - starting at element [0]
		
	(playing field array)	(string input for r[])	 (converting r[] values for X and O)		
		0	1	2				b1	b2	b3				 0/1/2	 0/1/2	 0/1/2					-/X/O	-/X/O	-/X/O
		3	4	5	   <=>		b4	b5	b6		 =>		 0/1/2	 0/1/2	 0/1/2			<=>		-/X/O	-/X/O	-/X/O
		6	7	8				b7	b8	b9				 0/1/2	 0/1/2	 0/1/2					-/X/O	-/X/O	-/X/O
		
	*/


	bool pause;

	for (int i = 0; i <= 8; i++)	//round counter rounds 1 - 9
	{
		pause = true;		//Stops the round from increasing while choice is being made


		cout << "Turn number: " << (i + 1) << endl;

		if (i % 2 == 0)			//Checks who's turn it is
			cout << "Player 1's turn." << endl;
		else
			cout << "Player 2's turn." << endl;

		while (pause == true)
		{
			cin >> r[i];  //User input for which box to mark
			if (i % 2 == 0)	//Will place a 1 for X in the playField for player 1
			{
				if (r[i] == "b1")
				{
					playField[0] = 1;
					pause = false;
				}
				else if (r[i] == "b2")
				{
					playField[1] = 1;
					pause = false;
				}
				else if (r[i] == "b3")
				{
					playField[2] = 1;
					pause = false;
				}
				else if (r[i] == "b4")
				{
					playField[3] = 1;
					pause = false;
				}
				else if (r[i] == "b5")
				{
					playField[4] = 1;
					pause = false;
				}
				else if (r[i] == "b6")
				{
					playField[5] = 1;
					pause = false;
				}
				else if (r[i] == "b7")
				{
					playField[6] = 1;
					pause = false;
				}
				else if (r[i] == "b8")
				{
					playField[7] = 1;
					pause = false;
				}
				else if (r[i] == "b9")
				{
					playField[8] = 1;
					pause = false;
				}
				else
				{
					cout << "Choose a correct box." << endl;
				}
			}
			else //Will place a 2 for O in the playField for player 2
			{
				if (r[i] == "b1")
				{
					playField[0] = 2;
					pause = false;
				}
				else if (r[i] == "b2")
				{
					playField[1] = 2;
					pause = false;
				}
				else if (r[i] == "b3")
				{
					playField[2] = 2;
					pause = false;
				}
				else if (r[i] == "b4")
				{
					playField[3] = 2;
					pause = false;
				}
				else if (r[i] == "b5")
				{
					playField[4] = 2;
					pause = false;
				}
				else if (r[i] == "b6")
				{
					playField[5] = 2;
					pause = false;
				}
				else if (r[i] == "b7")
				{
					playField[6] = 2;
					pause = false;
				}
				else if (r[i] == "b8")
				{
					playField[7] = 2;
					pause = false;
				}
				else if (r[i] == "b9")
				{
					playField[8] = 2;
					pause = false;
				}
				else
				{
					cout << "Choose a correct box." << endl;
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

	for (int i = 0; i <= 8; i++)
	{
		cout << playField[i] << " ";
	}

	
    return 0;
}
