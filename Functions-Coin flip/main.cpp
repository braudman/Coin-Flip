 /****************************************************************************
 * AUTHOR	     : Stephen Braudo
 * STUDENT ID    : 1053220
 * Lab# 2		 : Coin Flip
 * CLASS	     : CS1B
 * SECTION	     : MW: 6:30pm
 * DUE DATE	     : 09/6/17
 ****************************************************************************/
#include "MyHeader.h"

/*******************************************************************************
 * Coin Flip Program
 * -----------------------------------------------------------------------------
 * This program will prompt the user to flip a coin and try to get three heads
 * in a row. Once the user has gotten three heads in a row, it will calculate
 * number of times how many heads were achieved. Then it will produce the total
 * number of tosses or flips along with the average of the amount of heads
 * flipped.
 * -----------------------------------------------------------------------------

 ******************************************************************************/
int main ()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * USED FOR DATA AMOUNT
	 * -------------------------------------------------------------------------
	 * NAME_AMT   : The amount of addresses to be used in the array for names
	 **************************************************************************/


	// Variable Declarations

	string name;		 //IN & OUT - name of user
	char   gender;		 //IN & OUT - gender of user
	bool   invalid;		 //CALC - variable to enter the do-while loop
	int    coinFlip;	 //CALC & OUT - the number needed to exit the program
	int    coinCount;    //CALC & OUT - the number of tosses in total
	int    totalHeads;   //CALC & OUT - total number of heads in a run achieved
    float  avgHeads;	 //CALC - variable used to assign the average
    srand  (time(NULL)); //CALC - initiates a random integer



	/***************************************************************************
	 * INPUT- will ask for the user's name and gender and then wish them luck
	 * as they play. Will instruct the user to try to get three heads in a row,
	 * which will then exit the program and reveal their average at the end.
	 **************************************************************************/
	PrintHeader("Coin Flip", 'L', 2);

     UserInfo(name, gender, invalid);


	/***************************************************************************
	 * PROCESSING- Will return if the coin is a head or a tail and accumulate
	 * the running total of all coins and heads. It will then send the
	 * total amount of heads and the total times the coin was tossed to fins the
	 * average of landing on heads.
	 **************************************************************************/
	BoolReturn (coinCount, coinFlip, totalHeads);

	 avgHeads = AvgFunction(totalHeads , coinCount );


	/***************************************************************************
	 * OUTPUT- This will output the number of time the user tries to get 3
	 * heads in a row. It will then output the percentage of how many times
	 * heads occurred as the user kept flipping to get 3 heads in a row
	 **************************************************************************/

	OutputFunction( coinFlip, avgHeads, coinCount );

	return 0;
}
