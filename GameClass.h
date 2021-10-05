#ifndef GAMECLASS_H
#define GAMECLASS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class GameClass
{
private:

	string Locations[3] = { "Village Entrance", "Tavern", "Abandoned Shack" }; //, {"Village Entrance Info", "Tavern Info", "Abandoned Shack Info"} };
	string PlayerLocation = Locations[0];
public:
//	void Location();
	void SetLocation(string);
	string GetLocation();
	void VillageDescr();
	void TavernDescr();
	void AbandonDescr();
	void AbandonDescrL();
};
#endif