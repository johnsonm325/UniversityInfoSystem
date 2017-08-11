/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Definitions of the menu class functions
***************************************************************************************************/

#include "Menu.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;

/****************************************************************************************************
**                                         displayMenu
**                       Displays the menu of game options on the screen.
**                        I pulled this function idea from the textbook.
****************************************************************************************************/
void Menu::displayMenu()
{
	cout << "\n Oregon State University" << endl;
	cout << "1.  Enter a new person" << endl;
	cout << "2.  Enter a new building" << endl;
	cout << "3.  Print building information" << endl;
	cout << "4.  Print person information" << endl;
	cout << "5.  Assign work" << endl;
	cout << "6.  Exit" << endl;
	cout << endl;
}


/****************************************************************************************************
**                                          setChoice
**                              Sets the menu choice from the user
****************************************************************************************************/
void Menu::setChoice()
{
	cout << "Choose an option: " << endl;
	choice = inputVal1.isPosInteger();

	while (choice > 6 || choice < 1)
	{
		cout << "Choose an option: " << endl;
		choice = inputVal1.isPosInteger();
	}
}


/****************************************************************************************************
**                                          getChoice
**                       Gets the menu choice from the user and returns it
****************************************************************************************************/
int Menu::getChoice()
{
	return choice;
}
