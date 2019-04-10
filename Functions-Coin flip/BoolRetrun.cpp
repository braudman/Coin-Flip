 /****************************************************************************
 * AUTHOR	     : Stephen Braudo
 * STUDENT ID    : 1053220
 * Lab# 2		 : Coin Flip
 * CLASS	     : CS1B
 * SECTION	     : MW: 6:30pm
 * DUE DATE	     : 09/6/17
 ****************************************************************************/

#include "MyHeader.h"


/******************************************************************************
 *BoolReturn
 *  This function prompts the user to continuously flip a coin for a
 *  random amount of times until they achieve 3 heads in a row. The program will
 *  generate  a random number ( 1 or 2) which will determine if the coin is
 *  heads or tails. Then it will keep a running total on the head count,
 *  times the coin was tossed, and total number of how many time the user
 *  landed on heads.
 * ==> returns nothing
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *   int &coinFlip
	 int &headCount
	 int &totalHead
 *
 *
 * POST-CONDITIONS
 * 	 Returns  ==> nothing
 **************************************************************************/
void BoolReturn(int &coinFlip,
		        int &coinCount,
				int &totalHeads)
{

	srand (time(NULL));
		int randomNumber;


		totalHeads = 0;
		coinFlip   = 0;
		coinCount  = 0;

		while(coinCount != 3)
		{
			cout << "Press <enter> to flip: ";
			cin.ignore();

			randomNumber = rand() % 2 + 1;

			if(randomNumber == 1)
			{
				coinCount++;
				totalHeads++;
				cout << "HEADS" << endl;
			}
			else
			{
				cout << "TAILS" << endl;
				coinCount = 0;
			}
			coinFlip++;


		}



}
