#ifndef LOCATIONS_H
#define LOCATIONS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Locations
{
private:
	string locationName;
	string locationDesc;

public:
	string getLocationName();
	string getLocationDesc();
	void setLocationName(string);
	void setLocationDesc(string);
	Locations(string, string);
};
#endif