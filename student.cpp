/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Definitions of Student class functions
***************************************************************************************************/

#include "Student.h"

/*******************************************************************************************************
**										Student Default Constructor
**							Constructs the object with empty variables
*******************************************************************************************************/
Student::Student() : People()
{
	studentName = "";
	studentAge = 0;
	studentGPA = 0.0;
}


/*******************************************************************************************************
**										Student Constructor
**					Constructs the object with user input for each variable
*******************************************************************************************************/
Student::Student(string n, int a, double g) : People(n, a, g)
{
	studentName = n;
	studentAge = a;
	studentGPA = g;
}

/*******************************************************************************************************
**										Student destructor
**									Destructs the object
*******************************************************************************************************/
Student::~Student()
{

}


/*******************************************************************************************************
**										getName function
**									returns the name of student variable
*******************************************************************************************************/
string Student::getName()
{
	return this->studentName;
}


/*******************************************************************************************************
**										getAge function
**									returns the age of student variable
*******************************************************************************************************/
int Student::getAge()
{
	return this->studentAge;
}


/*******************************************************************************************************
**										getScore function
**								returns the score of student variable
*******************************************************************************************************/
double Student::getScore()
{
	return this->studentGPA;
}


/*******************************************************************************************************
**										do_work function
**				creates a random number between 1 and the user input and stores it
*******************************************************************************************************/
void Student::do_work(int x)
{
	hoursWorked = rand() % x + 1;

	cout << getName() << " did " << hoursWorked << " hours of homework." << endl;
}