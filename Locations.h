#ifndef LOCATIONS_H
#define LOCATIONS_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "PlayerClass.h"
#include "GameClass.h"
#include "Inventory.h"
using namespace std;

class Locations
{
private:
	string northDoor;
	string southDoor;
	string eastDoor;
	string westDoor;
	string locationName;
	string locationDesc;
	string item;
	Inventory LocationInventory;

public:
	string getNorthDoor();
	string getSouthDoor();
	string getEastDoor();
	string getWestDoor();
	string getLocationName();
	string getLocationDesc();
	string getItem();
	void setLocationName(string);
	void setLocationDesc(string);
	Locations(string, string, string, string, string, string, string);
	void CheckLocation(Locations[], string, int);
	void LocationActions(Locations[], Inventory&);
};
#endif