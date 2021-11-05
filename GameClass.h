#ifndef GAMECLASS_H
#define GAMECLASS_H
#include <iostream>
#include <cstdlib>
#include <string>
#include "Inventory.h"
#include "Locations.h"
#include "InputValidation.h"
using namespace std;
/*
	This file contains the constructors for the current player location.
*/
class GameClass
{
private:

	//string Locations[3] = { "Village Entrance", "Tavern", "Abandoned Shack" }; //, {"Village Entrance Info", "Tavern Info", "Abandoned Shack Info"} };
	string playerLocation;
	InputValidation validate;
	
public:
//	void Location();
	GameClass();
	void Quit();
	void TunnelPuzzle();
	void FirstDeath();
	string UseMenu(Inventory, string);

};
#endif