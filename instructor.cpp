/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Definitions of Instructor class functions
***************************************************************************************************/

#include "Instructor.h"

/*******************************************************************************************************
**										Instructor Default Constructor
**							Constructs the object with empty variables
*******************************************************************************************************/
Instructor::Instructor() : People()
{
	instructorName = "";
	instructorAge = 0;
	instructorScore = 0.0;
}


/*******************************************************************************************************
**										Instructor Constructor
**					Constructs the object with user input for each variable
*******************************************************************************************************/
Instructor::Instructor(string n, int a, double s) : People(n, a, s)
{
	instructorName = n;
	instructorAge = a;
	instructorScore = s;
}

/*******************************************************************************************************
**										Instructor destructor
**									Destructs the object
*******************************************************************************************************/
Instructor::~Instructor()
{

}


/*******************************************************************************************************
**										getName function
**							returns the name of instructor variable
*******************************************************************************************************/
string Instructor::getName()
{
	return this->instructorName;
}


/*******************************************************************************************************
**										getAge function
**							returns the age of instructor variable
*******************************************************************************************************/
int Instructor::getAge()
{
	return this->instructorAge;
}


/*******************************************************************************************************
**										getScore function
**								returns the score of instructor variable
*******************************************************************************************************/
double Instructor::getScore()
{
	return this->instructorScore;
}


/*******************************************************************************************************
**										do_work function
**				creates a random number between 1 and the user input and stores it
*******************************************************************************************************/
void Instructor::do_work(int x)
{
	hoursWorked = rand() % x + 1;

	cout << getName() << " graded papers for " << hoursWorked << " hours." << endl;
}