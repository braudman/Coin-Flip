/*****************************************************************************
 * AUTHOR	  : Stephen Braudo and Jeremy Laster
 * STUDENT ID : 1053220 and 363129
 * LAB #16	  : Party Planner
 * CLASS	  : CS1A
 * SECTION	  : MW: 8am
 * DUE DATE	  : 03/15/17
 *****************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/*****************************************************************************
 *  INPUT:
 * This program will prompt the user to input the guest's name, age, and if the
 * guests has a chocolate and nut prefernce.
 *
 * 				name    : The user's name
 * 				age     : The user's age
 * 				chocPref: The usr's chocolate prefernce
 * 				nutPref : The user's nut preference
 * ---------------------------------------------------------------------------
 *
 * OUTPUT:
 * This program will ouput which snacks should be served to the the guest's
 * pprefernces along with which beverage should be served based on the inputs
 * from the user.
 *
 *****************************************************************************/

int main()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * LAB_NAME	  : Title of the Lab
	 * -----------------------------------------------------------------------
	 * CONSTANTS USED FOR THE SPACING OF OUTPUTS
	 * -----------------------------------------------------------------------
	 * IO_SPACING    : spacing used for the INPUT/OUTPUT section of the program
	 * TRI_COLUMN    : spacing used for the triangle portion of the OUTPUT
	 * RECT_COLUMN   : spacing used for the rectangle portion of the OUTPUT
	 * CIRCLE_COLUMN : spacing user for the circle portion of the OUTPUT
	 *************************************************************************/
	const char PROGRAMMER [40] = "Stephen Braudo and Jeremy Laster";
    const char CLASS [5]       = "CS1A";
    const char SECTION [25]    = "MW:8:00- 11:50";
    const int  LAB_NUM         = 16;
    const char LAB_NAME [17]   = "Party Planner";

    const int PROMPT_COL       = 31;
    const int SNACK_SIZE       = 20;

    // VARIABLE DECLARATIONS FOR PARTY PLANNER
    char name[25];            //   IN & OUT    - Guest name
    int  age;                 //   IN & CALC   - Guest age
    char chocPref;            //   IN & CALC   - Guest chocolate preference
    char nutPref;             //   IN & CALC   - Guest nut preference
    char beverage[SNACK_SIZE];
    char candy[SNACK_SIZE];


    // OUTPUT - Class Heading
    cout << left;
    cout << "***************************************************";
    cout << "\n*  PROGRAMMED BY : " << PROGRAMMER;
    cout << "\n*  " << setw(14) << "CLASS" << ": " << CLASS;
    cout << "\n*  " << setw(14) << "SECTION" << ": " << SECTION;
    cout << "\n*  LAB #" << setw(9) << LAB_NUM << ": " << LAB_NAME;
    cout << "\n***************************************************\n\n";
    cout << right;

    // INPUT - Users will input their name, whether they like chocolate, and
    //         if they like nuts in their chocolate.
    cout << left;
    cout << setw(PROMPT_COL) << "What is your friend\'s name?";
    cin.getline(name, 25);

    cout << setw(PROMPT_COL) << "How old is your friend?";
    cin >> age;
    cin.ignore(10000, '\n');

    cout << setw(PROMPT_COL) << "Do they like chocolate (Y/N)?";
    cin.get(chocPref);
    cin.ignore(10000, '\n');


    // Decide whether to serve skittles, M & M's or peanut M & M's and
    // output the choice.

    if (chocPref == 'Y')
    {
   	 cout << left;
    	 cout << setw(PROMPT_COL) << "Do they like nuts (Y/N)?";
    	 cin.get(nutPref);
    	 cin.ignore(10000, '\n');
    	 if(nutPref == 'N')
    	 {
    		 strncpy(candy, "M & M's", SNACK_SIZE);
    	 }
    	 else
    	 {
    		 strncpy(candy, "Peanut M & M's", SNACK_SIZE);
        }
    }
    else
    {
    	strncpy(candy, "Skittles", SNACK_SIZE);
    }
     // Decide whether to serve beer or soda and output the choice.

    if(age>=21)


    {
    	strncpy(beverage, "beer", SNACK_SIZE);
    }
    else
    {
    	strncpy(beverage, "soda", SNACK_SIZE);
    }

    cout << endl << endl << endl;

    cout << "You should serve " << name << " " << candy << " and "
    	 << beverage << "."<< endl;

    return 0;
}








