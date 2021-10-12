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
	/*
	Multiple rooms are created, with their names, descriptions being defined through a constructor. 
	The main game loop is created for game functionality
	*/
	int playerchoice;
	Locations VillageEntrance("Village Entrance", "Village Entrance Description, Press [1] to go west to Abandoned Shack, Press [2] to go east to Tavern");
	Locations AbandonedShack("Abandoned Shack", "Abandoned Shack is too dark to explore, needs some sort of light source, Press [1] to go back to Village Entrance");
	Locations Tavern("Tavern", "Tavern Description, Press [1] to go to bar, Press [2] to pick up lantern from table, Press [3] to go back to Village Entrance");
	UI Interface;
	PlayerClass Player;
	GameClass Game(VillageEntrance.getLocationName());
//	cout << VillageEntrance.getLocationName() << endl;
//	cout << VillageEntrance.getLocationDesc() << endl;
	enum loc{Village_Entrance = 1, Abandoned_Shack = 2, Village_Tavern = 3 };
	loc playerLoc = Village_Entrance;
	//Interface.DisplayLocation(Game.GetLocation(),VillageEntrance.getLocationDesc());

	while(true)
		switch (playerLoc)
		{
		case 1:
			Interface.DisplayLocation(VillageEntrance.getLocationName(), VillageEntrance.getLocationDesc());
			cin >> playerchoice;
			Player.CallInventory(playerchoice);
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
					AbandonedShack.setLocationDesc("The lantern lighting up the room reveals there is a trapdoor. Press [1] to open it, Press [2] to return to the village entrance:");
					
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
	}*/
		

	//Interface.DisplayChoices();
	system("pause");
	return 0;
}
