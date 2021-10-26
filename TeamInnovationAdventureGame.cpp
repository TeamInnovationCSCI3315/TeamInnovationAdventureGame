// TeamInnovationAdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "PlayerClass.h"
#include "GameClass.h"
#include "UI.h"
#include "Locations.h"
#include "Inventory.h"
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
	/*Inventory VillageEntranceInventory;
	Inventory AbandonedShackInventory;
	Inventory TavernInventory;
	Inventory TunnelInventory;*/
	Inventory PlayerInventory;
	GameClass Game;
	/*
	Multiple rooms are created Location(Location Name, Location Description, North, South, East, West, item);
	*/
	Locations VillageEntrance("Village Entrance", "You find yourself looking at a village as you sit at the entrance of it. There is the light hooting of an owl as you start walking.\nAs you look around you notice how dark it is, the village allows you to barely maneuver around with the faint candlelight from the street lamps.\nIn one direction, following the road to the east you notice a tavern up ahead with bright lights and the sounds of commerce. This could be a good place to find information and help and it is probably the brightest place.\nIn the other direction you notice the lights grow scarcer and scarcer until you can barely see the outline of what seems to be an abandoned shack, something draws you to it's shadow, curiosity maybe?\n ", "", "", "Tavern", "Abandoned Shack", "");
	Locations AbandonedShack("Abandoned Shack", "After walking you arrive at the pitch black shack, it's presence alone stands as if you could die and it wouldn't so much as creek.\nAs you approach it closer to inspect the strange building you find that it becomes far too dark to see and proceed forward, at least safely.\nDo you decide to exit now? \n ", "", "", "Village Entrance", "", "");
	Locations Tavern("Tavern", "You enter into a tavern with bright almost blinding light. It is noisy as people chat around at the bar and entrance.\nYou are able to squeeze your way into the main room, most people have not taken notice of you and proceed about their bussiness.\nThere lays the bar to your right that carries the smells of beer to you alongside other aromas.\nYou also see on your left a fine finished table with a lantern on it.\n \n [1] Go to bar \n [2] Pick up lantern from table \n [3] Exit\n ", "", "", "", "Village Entrance", "Lantern");
	Locations Tunnel("Tunnel", "You awake on the floor, a throbbing pain coming from your head.\n As you open your eyes by some miracle the lantern is lit next to your head.\n  You arise, lantern in hand to find a crimson streak on the ground where you laid.\n You look up to find the trapdoor you entered from, out of reach.\n Looking around you notice you're in a cramped cavern.\n It is granite like with it's soft shimmer the walls give off as your lantern's light hits and exits the speckled walls.\n You see two pathways ahead of you, one to the left and one that continues straight. \n", "Mysterious Room", "", "", "Left Tunnel Room", "");
	Locations MysteriousRoom("Mysterious Room", " You are in a rigid, uneven granite room difficult to walk in. \n", "", "Tunnel", "", "Left Tunnel Room", "");
	Locations LeftTunnelRoom("Left Tunnel Room", "As you go down the pathway to the left the granite gives way to finished stonework.\n You see at the end a shadow.\n But not just any shadow, a darkness your light fails to illuminate from where you're standing.\nIt's disorienting to your eyes, and startles your stomach as you try to make out what it is.\n A faint moaning can be heard, it seems to be alive\n This could be deadly. Do you approach the shadow to inspect ? Or go back ? \n", "", "", "Tunnel", "Mysterious Room", "");
	Locations MysteriousDoor("Mysterious Door", "Mysterious Door", "", "", "", "", "");
	Locations PlayerLocation("", "", "", "", "","","");
	Locations AllLocations[] = { VillageEntrance , AbandonedShack , Tavern ,Tunnel , MysteriousRoom , LeftTunnelRoom, MysteriousDoor};
	const int AllLocationsSize = 7;
	
	// Player starts at Village Entrance, so their initial location is Village Entrance;
	PlayerLocation = VillageEntrance;
	UI Interface;
	PlayerClass Player();
//	cout << VillageEntrance.getLocationName() << endl;
//	cout << VillageEntrance.getLocationDesc() << endl;
	
	//enum loc{Village_Entrance = 1, Abandoned_Shack = 2, Village_Tavern = 3};
	//loc playerLoc = Village_Entrance;
	//Interface.DisplayLocation(Game.GetLocation(),VillageEntrance.getLocationDesc());
	//Interface.DisplayIntroduction();
	//cout << "Place Holder Introduction: Press 0 to quit at any time\n" << endl << endl;
	cout << "Game Version 0.1" << endl;
	Interface.DisplayIntroduction();
	while (true) //Will later be switched to !GameOver
	{
		
		//For testing purposes, will later be moved to its own function
		cout << PlayerLocation.getLocationDesc() << endl;
		cout << "\t [1] North: " << PlayerLocation.getNorthDoor() << endl << "\t [2] South: " << PlayerLocation.getSouthDoor() << endl << "\t [3] East: " << PlayerLocation.getEastDoor() << endl << "\t [4] West: " <<  PlayerLocation.getWestDoor() << endl << "\t [5] View Inventory" << endl << "\t [0] Quit Game" << endl << endl;
		
		cin >> playerchoice;
		PlayerInventory.CallInventory(playerchoice);
		Game.Quit(playerchoice);
		/*
		Switch statement performing functions CheckLocation and LocationActions based on directional movement
		*/
		switch (playerchoice)
		{
		case 1: // North
			if (PlayerLocation.getNorthDoor() == "")
			{
				cout << "Invalid\n";
			}
			else
			{
				PlayerLocation.CheckLocation(AllLocations, "North",AllLocationsSize);
				//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
				PlayerLocation.LocationActions(AllLocations, PlayerInventory);

			}
			break;
		case 2: // South
			if (PlayerLocation.getSouthDoor() == "")
			{
				cout << "invalid\n";
			}
			else
			{
				PlayerLocation.CheckLocation(AllLocations, "South",AllLocationsSize);
				//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
				PlayerLocation.LocationActions(AllLocations, PlayerInventory);
			}
			break;
		case 3: // East
			if (PlayerLocation.getEastDoor() == "")
			{
				cout << "invalid\n";
			}
			else
			{
				PlayerLocation.CheckLocation(AllLocations, "East",AllLocationsSize);
				//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
				PlayerLocation.LocationActions(AllLocations,PlayerInventory);
			}
			break;
		case 4: // West
			if (PlayerLocation.getWestDoor() == "")
			{
				cout << "invalid\n";
			}
			else
			{
				PlayerLocation.CheckLocation(AllLocations, "West",AllLocationsSize);
				//cout << PlayerLocation.getLocationName() << endl << PlayerLocation.getLocationDesc();
				PlayerLocation.LocationActions(AllLocations, PlayerInventory);
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
	system("pause");
	return 0;
}
