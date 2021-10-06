#include "GameClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


void UI::DisplayLocation(string room)
{
	cout << "You are currently at: " << room << endl;
}



/* void GameClass::Location()
{

}
void GameClass::SetLocation(string location)
{
	PlayerLocation = location;
}
string GameClass::GetLocation()
{
	return PlayerLocation;
}*/

void UI::DrinkDesc()
{
	cout << "Would you like a drink from the bar?" << endl;

}
void UI::PickupLanternDesc()
{
	cout << "Do you want to pickup the lantern?" << endl;

}
void UI::LeaveLanternDesc()
{
	cout << "Do you want to leave the lantern?" << endl;
	cout << "Note: The lantern could be a source of light in dark areas" << endl;

}