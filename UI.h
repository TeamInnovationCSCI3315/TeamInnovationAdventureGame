#ifndef UI_H
#define UI_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
	This constructs the display for the choices, player input and location and returns it to cpp file to be displayed
*/
class UI
{
private:
	int playerInput;
public: 
	int ReturnChoices();
	void DisplayChoices(string);
	void DisplayLocation(string,string);
	void DisplayIntroduction();
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


