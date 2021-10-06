#ifndef UI_H
#define UI_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class UI
{
private:
	int playerInput;
public: 
	int ReturnChoices();
	void DisplayChoices(string);
	void DisplayLocation(string,string);
/*	
	string GetLocation();
	void DrinkDesc();
	void PickupLanternDesc();
	void LeaveLanternDesc();
	void DisplayInventory();
	void UseItem(string);*/
};
#endif


// adding item descriptions here, not sure if this is a the proper location, but I will review with Andrew tonight


