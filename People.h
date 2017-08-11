/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Header file for People class
***************************************************************************************************/
#ifndef PEOPLE_H
#define PEOPLE_H

#include "Menu.h"

class People
{
private:
	string		personName;		// Holds the person's name
	int			personAge,		// Holds the person's age
				hoursWorked;	// Holds the hours worked for the person
	double		personScore;	// Holds the person's score (GPA or instructor rating)


public:
	People();
	People(string, int, double);
	virtual ~People();
	string getName();
	int getAge();
	double getScore();
	virtual void do_work(int);

};
#endif
