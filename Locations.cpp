#include "Locations.h"
#include "GameClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
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