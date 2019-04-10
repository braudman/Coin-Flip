 /****************************************************************************
 * AUTHOR	     : Stephen Braudo
 * STUDENT ID    : 1053220
 * Lab# 2		 : Coin Flip
 * CLASS	     : CS1B
 * SECTION	     : MW: 6:30pm
 * DUE DATE	     : 09/6/17
 ****************************************************************************/
#include "MyHeader.h"

/************************************************************************
* FUNCTION PrintHeader
*----------------------------------------------------------------------
* This function receives an assignment name, type
* and number then outputs the appropriate class heading.
* ==> returns nothing - This will output the class heading.
*-----------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* asName: Assignment Name
* asType: Assignment Type
* asNum : Assignment Number
*
* POST-CONDITIONS
* ==> Returns nothing - This function will output the class heading.
*************************************************************************/
void PrintHeader(string asName,  // IN - assignment Name – used for output
				 char asType,    // IN - assignment type
				 	 	 	 	 //    - (LAB or ASSIGN) – used for output
				 int asNum)  	 // IN – assign. Number  - used for output
{
	cout << left;
	cout << "***********************************************************"
		 <<	"**\n";
	cout << "*  PROGRAMMED BY : Stephen Braudo\n";
	cout << "*  " << setw(14) << "STUDENT ID" << ": 1053220\n";
	cout << "*  " << setw(14) << "CLASS" << ": CS1B\n";
	cout << "*  " << setw(14) << "SECTION" << ": MW: 6:30\n";
	cout << "*  ";
	//	PROCESSING - This will adjust setws and format appropriately
	//				 based on if this is a lab 'L' or assignment
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	} // end if
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	} // end else

	cout << asNum << ": " << asName << endl;
	cout << "**********************************************************"
		 <<	"***\n\n";
	cout << right;
}
