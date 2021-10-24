#ifndef LOCATIONS_H
#define LOCATIONS_H
#include <iostream>
#include <cstdlib>
#include <string>
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

public:
	string getNorthDoor();
	string getSouthDoor();
	string getEastDoor();
	string getWestDoor();
	string getLocationName();
	string getLocationDesc();
	void setLocationName(string);
	void setLocationDesc(string);
	Locations(string, string, string, string, string, string);
	void CheckLocation(Locations[], string);
};
#endif