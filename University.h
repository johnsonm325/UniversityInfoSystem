/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Header file for University class
***************************************************************************************************/
#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include "Instructor.h"

class University
{
private:
	vector<Buildings*>	buildingVect;	// Vector that holds the building objects
	vector<People*>		peopleVect;		// Vector that holds the pointer to People objects
	People		*tempS;
	People		*tempI;
	Buildings	*tempB;
	string		universityName,			// Holds the name of the university
				tempName,				// Holds a temporary name
				tempAddress;			// Holds a temporary address
	int			numOfBuildings,			// Holds the number of buildings in the university
				numOfPeople,			// Holds the number of people in the university
				tempAge,				// Holds a temporary age
				tempSize,				// Holds a temporary size
				tempHours;				// Holds temporary hours
	double		tempScore;				// Holds a temporary score
	Menu		menu1;					// Menu object
	InputValid	inputVal1;				// Input validation object

public:
	University();
	~University();
	void menu();
	void addToBuildVector(Buildings*);
	void addToPeopVector(People*);
	void printBuildings();
	void printPeople();
};
#endif
