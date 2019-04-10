 /****************************************************************************
 * AUTHOR	     : Stephen Braudo
 * STUDENT ID    : 1053220
 * Lab# 2		 : Coin Flip
 * CLASS	     : CS1B
 * SECTION	     : MW: 6:30pm
 * DUE DATE	     : 09/6/17
 ****************************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_


#include <iostream>			//** cin, cout
#include <iomanip>			//** setp(), fixed, setw()
#include <string.h>			//** string
#include <ctype.h>			//** toupper
#include <fstream>          //** fin, fout
#include <sstream>          //** ostringstream
#include <stdlib.h>         //** for srand, rand
#include <time.h>			//** for time
using namespace std;



/******************************************************************************
 *PrintHeader
 *  This function receives an assignment name, type, and number then outputs the
 *  appropriate class heading.
 *  asType is defaulted to Lab as there are more labs than assignments.
 *  ==> returns nothing - this will output the class heading
 ******************************************************************************/

void PrintHeader(string asName,
				  char asType,

				  int  asNum);

/******************************************************************************
* UserInfo
* This function receives the users name and gender and verifies that the gender
* is either M or F in case someone accidently inputs a wrong letter

* ==> returns nothing - this will output the name and gender
*
******************************************************************************/

void UserInfo( string  &name,
		 	    char   &gender,
			    bool   &invalid);

/******************************************************************************
 *BoolReturn
 *  This function prompts the user to continuously flip a coin for a
 *  random amount of times until they achieve 3 heads in a row.
 * ==> returns nothing - this will output the class heading
 **************************************************************************/

void BoolReturn(int &coinFlip,
		        int &headCount,
				int &totalHeads);


/******************************************************************************
 *AvgFunction
 *  This function calculates the average number of heads tossed in the game and
 *  will be displayed as a percentage.
 * ==> returns nothing
 *****************************************************************************/

float AvgFunction( int  totalHeads,
				   int  headCount);

/******************************************************************************
 *PrintHeader
 *  This function receives an assignment name, type, and number then outputs the
 *  appropriate class heading.
 *  asType is defaulted to Lab as there are more labs than assignments.
 *  ==> returns nothing - this will output the class heading
 ******************************************************************************/

void OutputFunction(int   coinFlip,
				    float avg,
				    int   headCount );

#endif /* MYHEADER_H_ */
