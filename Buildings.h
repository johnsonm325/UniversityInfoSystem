/***************************************************************************************************
** Author: Michael Johnson
** Date: 7/19/2017
** Description: Header file for Buildings class
***************************************************************************************************/
#ifndef BUILDINGS_H
#define BUILDINGS_H

#include "People.h"

class Buildings
{
private:
	string		buildingName,	// Holds the name of the building
				address;		// Holds the address of the building
	int			buildingSize;	// Holds the size of the building

public:
	Buildings();
	Buildings(string, int, string);
	~Buildings();
	string getName();
	int getSize();
	string getAddress();
};
#endif