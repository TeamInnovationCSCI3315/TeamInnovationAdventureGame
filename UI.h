#ifndef UI_H
#define UI_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class UI
{
public: 
	void DisplayInventory();
	void DisplayChoices();
	void UseItem(string);
	void DisplayLocation(string);
	string GetLocation();
	void DrinkDesc();
	void PickupLanternDesc();
	void LeaveLanternDesc();
};
#endif


// adding item descriptions here, not sure if this is a the proper location, but I will review with Andrew tonight


