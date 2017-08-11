/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Header file for Student class
***************************************************************************************************/
#ifndef STUDENT_H
#define STUDENT_H

#include "Buildings.h"

class Student : public People
{
private:
	string		studentName;	// Holds the name of the student
	int			studentAge,		// Holds the age of the student
				hoursWorked;	// Holds the hours the student worked
	double		studentGPA;		// Holds the GPA of the student

public:
	Student();
	Student(string, int, double);
	~Student();
	string getName();
	int getAge();
	double getScore();
	void do_work(int);
};
#endif
