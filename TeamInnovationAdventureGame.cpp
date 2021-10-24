// TeamInnovationAdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "PlayerClass.h"
#include "GameClass.h"
#include "UI.h"
#include "Locations.h"
#include <iostream>
using namespace std;
/*
This file in particular contains the player choice, calls locations, UI and GameClass from the respective header file.
This is done to run the game for the user and provides the main code, such as asking for the player choice to be 
processed in the GameClass, Locations and UI.
*/
int main()
{
	int playerchoice;
	/*
	Multiple rooms are created Location(Location Name, Location Description, North, South, East, West);
	*/
	Locations VillageEntrance("Village Entrance", "Village Entrance Temporary Removed Description\n ", "", "", "Tavern", "Abandoned Shack");
	Locations AbandonedShack("Abandoned Shack", "Abandoned Shack Temporary Removed Description \n ", "", "", "Village Entrance", "");
	Locations Tavern("Tavern", "Tavern Temporary Removed Description \n ", "", "", "", "Village Entrance");
	Locations PlayerLocation("", "", "", "", "","");
	Locations AllLocations[] = { VillageEntrance,AbandonedShack,Tavern };	
	
	// Player starts at Village Entrance, so their initial location is Village Entrance;
	PlayerLocation = VillageEntrance;
	UI Interface;
	PlayerClass Player;
//	cout << VillageEntrance.getLocationName() << endl;
//	cout << VillageEntrance.getLocationDesc() << endl;
	
	//enum loc{Village_Entrance = 1, Abandoned_Shack = 2, Village_Tavern = 3};
	//loc playerLoc = Village_Entrance;
	//Interface.DisplayLocation(Game.GetLocation(),VillageEntrance.getLocationDesc());
	//Interface.DisplayIntroduction();
	//cout << "Place Holder Introduction: Press 0 to quit at any time\n" << endl << endl;
	cout << "Game Version 0.1" << endl;
	while (true)
	{
		cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc() << endl;
		cout << "\t North: " << PlayerLocation.getNorthDoor() << endl << "\t South" << PlayerLocation.getSouthDoor() << endl << "\t East: " << PlayerLocation.getEastDoor() << endl << "\t West: " <<  PlayerLocation.getWestDoor() << endl << endl;
		cin >> playerchoice;
		switch (playerchoice)
		{
		case 1: // North
			if (PlayerLocation.getNorthDoor() == "")
			{
				cout << "Invalid\n";
			}
			else
			{
				PlayerLocation.CheckLocation(AllLocations, "North");
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
				PlayerLocation.CheckLocation(AllLocations, "South");
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
				PlayerLocation.CheckLocation(AllLocations, "East");
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
				PlayerLocation.CheckLocation(AllLocations, "West");
				//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
			}
			break;
		}
	}
/*
	while(true)
		switch (playerLoc)
		{
		case 1:
			Interface.DisplayLocation(VillageEntrance.getLocationName(), VillageEntrance.getLocationDesc());
			cin >> playerchoice;
			Player.CallInventory(playerchoice);
			Game.Quit(playerchoice);
			if (playerchoice == 1)
				playerLoc = Abandoned_Shack;
			else if (playerchoice == 2)
			{
				playerLoc = Village_Tavern;
			}
			break;
		case 2:
			
				Interface.DisplayLocation(AbandonedShack.getLocationName(), AbandonedShack.getLocationDesc());
				cin >> playerchoice;
				Player.CallInventory(playerchoice);
				Game.Quit(playerchoice);
				if (Player.searchInventory("lantern"))
				{
					if (playerchoice == 2)
					{
						playerLoc = Village_Entrance;
					}
				}
			else
			{
					if (playerchoice == 1)
						playerLoc = Village_Entrance;
			}
			//playerLoc = Abandoned_Shack;
			break;
		case 3:
			Interface.DisplayLocation(Tavern.getLocationName(), Tavern.getLocationDesc());
			cin >> playerchoice;
			Player.CallInventory(playerchoice);
			Game.Quit(playerchoice);
				switch (playerchoice)
				{
				case 1:
					cout << "You sit at the bar, and grab a quick drink. None of the locals are very friendly. \n";
					break;

				case 2:	
					if (!Player.searchInventory("lantern"))
					{
					cout << "You have picked up the lantern from the table! Press [5] to display your inventory \n ";
					Player.AddItem("lantern");
					//Player.DisplayInventory();
					Tavern.setLocationDesc("Press [1] to go to bar, Press [2] to go back to Village Entrance");
					AbandonedShack.setLocationDesc("With the lantern in hand you head towards the abandoned shack once again.\nIt seems to be made out of a rotting, creeping willow of some kind or another, though it splinters out as a thorny hide.\nIt has a flimsy door held together by sheer luck, and a rusted doorknob is the only thing standing between you and the inside.\nYou pull open the wooden door as you do the door comes off of it's hinges with a loud thunk.\nYou step to the side with an inexplicable calmness as it falls where you were previously standing.\nThe inside of it is  hard to take in as you enter, still wondering.\nThe walls seem warped and as if waves of fabric compared to it's porcupine exterior.\nAn ocean of fine willow, sanded and well maintained like it's floors and a nearby bed.\nThe candles with their wax drapping over windowsills greet you with the faintest flicker, before extinguishing.\nStartled, you notice the new wax drips just below a trapdoor not just a foot away from you.\nIt's fine finished wood and golden knocker whisper to you almost in a wordless alure.\nYou wonder finally, why?\nThe door, the candles, the words, this shack.\nAnd it's with these thoughts, this pause, this hesitation, this fear.\nIt happens.\nWhat do you do?\n Press [1] to open it, Press [2] to return to the village entrance:");
					break;
					}
					else
					{
						playerLoc = Village_Entrance;
						break;
					}
				case 3:
					if (!Player.searchInventory("lantern"))
					{
						playerLoc = Village_Entrance;
						break;
					}
					
					break;
				}
				break;
		default:
			cout << "Error in main switch statement" << endl;
			cin >> playerchoice;
		//	playerLoc = Village_Tavern;
		}
	/*switch (playerLoc)
	{
	case 1:
		Interface.DisplayLocation(Game.GetLocation(), VillageEntrance.getLocationDesc());
		break;
	case 2:
		Interface.DisplayLocation(Game.GetLocation(), AbandonedShack.getLocationDesc());
		break;
	case 3:
		Interface.DisplayLocation(Game.GetLocation(), Tavern.getLocationDesc());
		break;
	}
*/
	//Interface.DisplayChoices();
	system("pause");
	return 0;
}
