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
 * UserInfo
 * This function receives the name and gender of the user. The gender choice
 * will go through a do-while loop to verify the correct gender was chosen.
 * ==> returns nothing
 *
 ******************************************************************************/
 void UserInfo( string &name,
		 	    char   &gender,
			    bool   &invalid)
 {
	 const int PROMPT_COL = 27;

	 	cout << left;
	 	cout << setw(PROMPT_COL) << "What is your name?";
	 	getline(cin,name);

	 	do
	 		{


	 			cout << setw(PROMPT_COL) << "What is your gender (m/f):";
	 			cin.get(gender);
	 			cin.ignore(1000, '\n');


	 			cout << endl;

	 			switch(toupper(gender))
	 			{

	 			case 'M':
	 					 invalid = 0;
	 					 break;
	 			case 'F' :
	 					 invalid = 0;
	 					 break;
	 			default : invalid = 1;

	 			}

	 				if(invalid == false)
	 				{
	 					cout << "Try to get 3 heads in a row.";

	 					if(toupper(gender)== 'M')
	 					{
	 						cout << " Good luck Mr. " << name << "!" << endl
	 							 << endl;
	 					}
	 					else
	 					{
	 						cout << " Good luck Ms. " << name << "!" << endl
	 							 << endl;
	 					}
	 				}
	 				else
	 				{
	 					cout << "\n---Invalid Gender---\n"
	 						 << "Please pick a gender!\n\n";
	 				}
	 		}while(invalid);

 }
