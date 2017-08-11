/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Header file for Instructor class
***************************************************************************************************/
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Student.h"

class Instructor : public People
{
private:
	string		instructorName;		// Holds the name of the instructor
	int			instructorAge,		// Hold the age of the instructor
				hoursWorked;		// Holds the hours the instructor worked
	double		instructorScore;	// Hold the rating of the instructor

public:
	Instructor();
	Instructor(string, int, double);
	~Instructor();
	string getName();
	int getAge();
	double getScore();
	void do_work(int);
};
#endif
