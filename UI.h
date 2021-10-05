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
};
#endif


// adding item descriptions here, not sure if this is a the proper location, but I will review with Andrew tonight

#include "GameClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


/* void GameClass::Location()
{
	
}*/
void GameClass::SetLocation(string location)
{
	PlayerLocation = location;
}
string GameClass::GetLocation()
{
	return PlayerLocation;
}
void UIClass::DrinkDescr()
{
	cout << "Would you like a drink from the bar?" << endl;

}
void UIClass::pickuplanternDescr()
{
	cout << "Do you want to pickup the lantern?" << endl;
	
}
void UIClass::leaveLanternDescr()
{
	cout << "Do you want to leave the lantern?" << endl;
	cout << "Note: The lantern could be a source of light in dark areas" << endl;

}
