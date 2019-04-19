 /****************************************************************************
 * AUTHOR	     : Stephen Braudo
 * STUDENT ID        : 1053220
 * Lab# 2	     : Coin Flip
 * CLASS	     : CS1B
 * SECTION	     : MW: 6:30pm
 * DUE DATE	     : 09/6/17
 ****************************************************************************/

#include "MyHeader.h"


/******************************************************************************
 *AvgFunction
 *  This function calculates the average number of heads tossed in the game and
 *  will be displayed as a percentage.
 * ==> returns the floating point value of the average
 *****************************************************************************
 *  * PRE-CONDITIONS
 *
 *
 * POST-CONDITIONS
 * 	 Returns  ==> nothing
 **************************************************************************/

float AvgFunction(int headCount,
		  int totalHeads)
{
	   float avg;

	   cout << setprecision(2);
	   avg = (float(headCount) / totalHeads)* 100;


		return avg;
}
