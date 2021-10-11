#include "Locations.h"
#include "GameClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
	Constructors for the location and instances for location description and name, and returns these values to the user.
*/
Locations::Locations(string n, string d)
{
	locationName = n;
	locationDesc = d;
}
string Locations::getLocationName()
{
	return locationName;
}
string Locations::getLocationDesc()
{
	return locationDesc;
}
void Locations::setLocationDesc(string d)
{
	locationDesc = d;
}
void Locations::setLocationName(string n)
{
	locationName = n;
}