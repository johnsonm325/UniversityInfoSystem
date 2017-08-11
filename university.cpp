/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Definitions of University class functions
***************************************************************************************************/

#include "University.h"


/*******************************************************************************************************
**										University Constructor
**							Constructs the object with the university name
*******************************************************************************************************/
University::University()
{
	universityName = "Oregon State University";
	/*build1 = new Buildings("Cordley Hall", 235805, "2701 SW Campus Way, Corvallis, OR 97331");
	build2 = new Buildings("Physical Plant - Vehicle Shed B", 679, "572 SW 15th St., Corvallis, OR 97331");

	addToBuildVector(build1);
	addToBuildVector(build2);

	stud1 = new Student("Michael Johnson", 31, 3.5);
	inst1 = new Instructor("Edward Francis", 25, 5.0);

	addToPeopVector(stud1);
	addToPeopVector(inst1);*/
}


/*******************************************************************************************************
**										University Destructor
**							Destructs the object with the university name
*******************************************************************************************************/
University::~University()
{
	for (int i = 0; i < peopleVect.size(); i++)
	{
		delete peopleVect[i];
	}
		peopleVect.clear();

	for (int i = 0; i < buildingVect.size(); i++)
	{
		delete buildingVect[i];
	}
	buildingVect.clear();
	
	
	delete tempS;
	delete tempI;
	delete tempB;
}


/*******************************************************************************************************
**										menu function	
**				Runs the program. Calls functions based on menu choice and user input
*******************************************************************************************************/
void University::menu()
{
	while (menu1.getChoice() != 6 ) // 6 represents exiting the program
	{
		// Provides menu and choice
		menu1.displayMenu();
		menu1.setChoice();

		// User chooses to add a person
		if (menu1.getChoice() == 1)
		{
			cout << "Are you adding a student or an instructor?" << endl;
			cout << "Enter 's' for student and 'i' for instructor" << endl;
			char pInput = inputVal1.isChar();
			
			if (pInput != 's' && pInput != 'i')
			{
				cout << "Enter 's' for student and 'i' for instructor" << endl;
				char pInput = inputVal1.isChar();
			}

			else
			{
				// User wants to input a student
				if (pInput == 's')
				{
					cout << "Enter student's name" << endl;
					tempName = inputVal1.isString();

					cout << endl;

					cout << "Enter student's age" << endl;
					cout << "between 17 and 85" << endl;
					tempAge = inputVal1.isPosInteger();

					// Checks to make sure age is in range
					while (tempAge < 17 || tempAge > 85)
					{
						cout << "Please enter an age between 17 and 85" << endl;
						tempAge = inputVal1.isPosInteger();
					}

					cout << endl;

					cout << "Enter student's GPA" << endl;
					cout << "between 0.0 and 4.0" << endl;
					tempScore = inputVal1.isFloat();

					// Checks to make sure GPA is in range
					while (tempScore < 0.0 || tempScore > 4.0)
					{
						cout << "Please enter a GPA between 0.0 and 4.0" << endl;
						tempScore = inputVal1.isFloat();
					}

					// Creates a pointer to People object for student
					tempS = new Student(tempName, tempAge, tempScore);
					addToPeopVector(tempS);
					//delete[] tempS;
				}

				// User wants to add an instructor
				else if (pInput == 'i')
				{
					cout << "Enter instructor's name" << endl;
					tempName = inputVal1.isString();

					cout << endl;

					cout << "Enter instructor's age" << endl;
					cout << "between 25 and 90" << endl;
					tempAge = inputVal1.isPosInteger();
					while (tempAge < 25 || tempAge > 90)
					{
						cout << "Please enter an age between 25 and 90" << endl;
						tempAge = inputVal1.isPosInteger();
					}

					cout << endl;

					cout << "Enter instructor's rating" << endl;
					cout << "between 0.0 and 5.0" << endl;
					tempScore = inputVal1.isFloat();
					while (tempScore < 0.0 || tempScore > 5.0)
					{
						cout << "Please enter an instructor rating between 0.0 and 5.0" << endl;
						tempScore = inputVal1.isFloat();
					}

					// Creates a pointer to People object for student
					tempI = new Instructor(tempName, tempAge, tempScore);
					addToPeopVector(tempI);
					//delete[] tempI;
				}
			}
		}

		// User wants to add a building
		else if (menu1.getChoice() == 2)
		{
			cout << "Enter building's name" << endl;
			tempName = inputVal1.isString();

			cout << endl;

			cout << "Enter size of building in square feet" << endl;
			cout << "between 0 and 500,000" << endl;
			tempSize = inputVal1.isPosInteger();
			while (tempSize < 0 || tempSize > 500000)
			{
				cout << "Please enter an age between 0 and 500,000" << endl;
				tempAge = inputVal1.isPosInteger();
			}

			cout << endl;

			cout << "Enter building's address" << endl;
			getline(cin, tempAddress);
			
			// Creates a pointer to Building object
			tempB = new Buildings(tempName, tempSize, tempAddress);
			addToBuildVector(tempB);
			//delete[] tempB;
		}

		// User wants to print a list of buildings
		else if (menu1.getChoice() == 3)
		{
			printBuildings();
		}

		// User wants to print a list of people
		else if (menu1.getChoice() == 4)
		{
			printPeople();
		}

		// User wants to make a person do work
		else if (menu1.getChoice() == 5)
		{
			// Prints a list of people's name
			for (size_t i = 0; i < peopleVect.size(); i++)
			{
				cout << peopleVect[i]->getName() << endl;
			}

			cout << endl;

			cout << "Enter the name of the person that you would like to do work" << endl;
			tempName = inputVal1.isString();

			cout << endl;

			// Loops through the people vector
			for (size_t i = 0; i < peopleVect.size(); i++)
			{
				// and searches for the name that the user input
				if (tempName == peopleVect[i]->getName())
				{
					cout << "What is the maximum number of hours you want them to work?" << endl;
					cout << "We don't work overtime, so choose a number between 1 and 40" << endl;
					tempHours = inputVal1.isPosInteger();

					cout << endl;

					while (tempHours < 1 || tempHours > 40)
					{
						cout << "Enter a number between 1 and 40" << endl;
						tempHours = inputVal1.isPosInteger();
					}
					
					// Passes the maximum number of hours a person will work to the do_work function
					peopleVect[i]->do_work(tempHours);
				}
			}
		}
	}
}


/*******************************************************************************************************
**										addToBuildVector function
**	Adds a building object to the building vector and changes the number of buildings to the new size
*******************************************************************************************************/
void University::addToBuildVector(Buildings *b)
{
	buildingVect.push_back(b);
	numOfBuildings = buildingVect.size();
}


/*******************************************************************************************************
**										addToPeopVector function
**		Adds a People object to the people vector and changes the number of people to the new size
*******************************************************************************************************/
void University::addToPeopVector(People *p)
{
	peopleVect.push_back(p);
	numOfPeople = peopleVect.size();
}


/*******************************************************************************************************
**										printBuildings function
** Prints the values of each building object in the vector along with number of buildings and university name
*******************************************************************************************************/
void University::printBuildings()
{
	cout << "There are " << numOfBuildings << " buildings at " << universityName << endl;
	
	for (int i = 0; i < numOfBuildings; i++)
	{
		cout << buildingVect[i]->getName() << endl;
		cout << buildingVect[i]->getSize() << endl;
		cout << buildingVect[i]->getAddress() << endl;
		cout << endl;
	}
}


/*******************************************************************************************************
**											printPeople function
** Prints the values of each People object in the vector along with number of people and university name
*******************************************************************************************************/
void University::printPeople()
{
	cout << "There are " << numOfPeople << " people at " << universityName << endl;

	for (size_t i = 0; i < peopleVect.size(); i++)
	{
		cout << peopleVect[i]->getName() << endl;
		cout << peopleVect[i]->getAge() << endl;
		cout << peopleVect[i]->getScore() << endl;
		cout << endl;
	}
}