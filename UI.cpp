#include "GameClass.h"
#include "UI.h"
#include "PlayerClass.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <map>
#include "InputValidation.h"
using namespace std;

InputValidation validate;
PlayerClass player1;
/*
	This displays the location, asks the player choice and takes the player input to be returned to the main cpp file.
*/
void UI::DisplayIntroduction()
{
	string name;
	cout << "Who are you Dreamer?\n";
	cin >> name;
	player1.setName(name);
	cout << "Interesting, I believe I am familiar.\n" 
		 << "You were busy " << player1.getName() << ", your life had been going along as it was, you were tired.\nSo very tired.\n" 
		 << "You went to sleep on one of your worse days, and when you slept you dreamt.\n" 
		 << "You fell into such a terrible nightmare, one that you cannot wake up from it.\n";
	system("pause");
	cout << "You fell into a world known as 'The First Strand', along The Bridge to the world of Fiction.\n"
		 << "You'll learn more of what I mean in due time " << player1.getName() << " all in due time.\n";
	system("pause");
	cout << "I will be your guide through this bridge, think of me as your deep concious, in a way I am that.\n"
		 << "Your goal as you know it is to find a way to wake up, to return to reality in the only way you know that is to dive into the dream.\n"
	     << "I wish you the best of luck, I know you can navigate the knots of this world, you'll find them, they pull you to them.\n I shall be seeing you very soon.\n";
	system("pause");
	system("CLS");
}
void UI::Menu(Locations AllLocations[], Locations& PlayerLocation, Inventory& PlayerInventory, GameClass& Game, int AllLocationsSize)
{
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "You are currently at: " << PlayerLocation.getLocationName() << endl;
	cout << "--------------------------------------------------------------------------" << endl;
	cout << "[1] Interact\n" << "[2] Move\n" << "[3] Inventory \n" << "[0] Quit Game\n";
	cout << "--------------------------------------------------------------------------" << endl;
	//cout << "\t [1] North: " << PlayerLocation.getNorthDoor() << endl << "\t [2] South: " << PlayerLocation.getSouthDoor() << endl << "\t [3] East: " << PlayerLocation.getEastDoor() << endl << "\t [4] West: " << PlayerLocation.getWestDoor() << endl << "\t [5] View Inventory" << endl << "\t [0] Quit Game" << endl << endl;
	playerInput = validate.inputValidation();
	switch (playerInput)
	{
	case 1:
		PlayerLocation.LocationActions(AllLocations, PlayerInventory);
		break;
	case 2:
		MoveOptions(AllLocations, PlayerLocation, AllLocationsSize);
		break;
	case 3:
		PlayerInventory.DisplayInventory();
		break;
	case 0:
		Game.Quit();
		break;
	default:
		cout << "Invalid";
		break;
	}
}
void UI::MoveOptions(Locations AllLocations[], Locations& PlayerLocation, int AllLocationsSize)
{
	cout << "\t [1] North: " << PlayerLocation.getNorthDoor() << endl << "\t [2] South: " << PlayerLocation.getSouthDoor() << endl << "\t [3] East: " << PlayerLocation.getEastDoor() << endl << "\t [4] West: " << PlayerLocation.getWestDoor() << endl << endl;
	int playerChoice;
	playerInput = validate.inputValidation();
	switch (playerInput)
	{
	case 1: // North
		if (PlayerLocation.getNorthDoor() == "")
		{
			cout << "Invalid\n";
		}
		else
		{
			PlayerLocation.CheckLocation(AllLocations, "North", AllLocationsSize);
			//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();

		}
		break;
	case 2: // South
		if (PlayerLocation.getSouthDoor() == "")
		{
			cout << "invalid\n";
		}
		else
		{
			PlayerLocation.CheckLocation(AllLocations, "South", AllLocationsSize);
			//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
		}
		break;
	case 3: // East
		if (PlayerLocation.getEastDoor() == "")
		{
			cout << "invalid\n";
		}
		else
		{
			PlayerLocation.CheckLocation(AllLocations, "East", AllLocationsSize);
			//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
		}
		break;
	case 4: // West
		if (PlayerLocation.getWestDoor() == "")
		{
			cout << "invalid\n";
		}
		else
		{
			PlayerLocation.CheckLocation(AllLocations, "West", AllLocationsSize);
			//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
		}
		break;
	}
}
/*
void UI::DisplayLocation(string room,string desc)
{
	cout << "You are currently at: " << room << endl;
	cout << desc << endl;
	//cin >> playerInput;
}
void UI::DisplayChoices(string c)
{
	cout << "What do you do? "<<endl;
}
int UI::ReturnChoices()
{
	return playerInput;
}
*/

