#ifndef GAMECLASS_H
#define GAMECLASS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
	This file contains the constructors for the current player location.
*/
class GameClass
{
private:

	//string Locations[3] = { "Village Entrance", "Tavern", "Abandoned Shack" }; //, {"Village Entrance Info", "Tavern Info", "Abandoned Shack Info"} };
	string playerLocation;
public:
//	void Location();
	GameClass(string);
	void SetLocation(string);
	string GetLocation();
	void Quit(int);

};
#endif