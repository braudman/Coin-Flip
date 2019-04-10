 /****************************************************************************
 * AUTHOR	     : Stephen Braudo
 * STUDENT ID    : 1053220
 * Lab# 2		 : Coin Flip
 * CLASS	     : CS1B
 * SECTION	     : MW: 6:30pm
 * DUE DATE	     : 09/6/17
 ****************************************************************************/

#include "MyHeader.h"

/***************************************************************************
 * FUNCTION OutputFruit
 * ------------------------------------------------------------------------
 * 		This function will output the total number of tosses it took to
 * 		achieve 3 heads in a row. It will also output the average number of
 * 		heads flipped that were counted in total number of flips including
 * 		the 3 heads in a row.
 *
 * 		==> returns nothing
 * ------------------------------------------------------------------------
 * PRE-CONDITIONS
 *  int coinFlip  - total number of times coin is flipped
	float avg     - the average number or percentage of heads flipped
	int headCount - the number of heads that the user achieved
 *
 * POST-CONDITIONS
 * 	 Returns  ==> nothing
 **************************************************************************/

void OutputFunction(int coinFlip,
				    float avg,
				    int coinCount )
{

	cout << endl;
	cout << "It took you " << coinCount << " tosses to get " << coinFlip
		 << " heads in a row.\n";
	cout <<"On average you flipped heads " << avg << "% of the time.\n"
		 << endl << endl;
}
