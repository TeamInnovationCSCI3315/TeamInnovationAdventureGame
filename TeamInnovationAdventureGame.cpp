// TeamInnovationAdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "PlayerClass.h"
#include "GameClass.h"
#include "UI.h"
#include "Locations.h"
#include <iostream>
using namespace std;

int main()
{
	int playerchoice;
	Locations VillageEntrance("Village Entrance", "Village Entrance Description, Press 1 to go west to Abandoned Shack, Pres 2 to go east to Tavern");
	Locations AbandonedShack("Abandoned Shack", "Abandoned Shack Description, Press 1 to go back to Village Entrance");
	Locations Tavern("Tavern", "Tavern Description, Press 1 to go back to Village Entrance");
	UI Interface;
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
			if (playerchoice == 1)
			{
				playerLoc = Village_Entrance;
			}
			//playerLoc = Abandoned_Shack;
			break;
		case 3:
			Interface.DisplayLocation(Tavern.getLocationName(), Tavern.getLocationDesc());
			cin >> playerchoice;
			if (playerchoice == 1)
			{
				playerLoc = Village_Entrance;
			}
		//	playerLoc = Village_Tavern;
			break;
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
