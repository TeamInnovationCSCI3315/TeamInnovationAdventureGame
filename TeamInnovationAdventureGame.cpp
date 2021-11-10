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
	Multiple rooms are created Location(Location Name, Location Description, North Room, South Room, East Room, West Room, item within room, object within room: NPC);
	All will be strings, if there is no value for one, set to ""
	*/
	Locations VillageEntrance("Village Entrance", "You find yourself looking at a village as you sit at the entrance of it. There is the light hooting of an owl as you start walking.\nAs you look around you notice how dark it is, the village allows you to barely maneuver around with the faint candlelight from the street lamps.\nIn one direction, following the road to the east you notice a tavern up ahead with bright lights and the sounds of commerce. This could be a good place to find information and help and it is probably the brightest place.\nIn the other direction you notice the lights grow scarcer and scarcer until you can barely see the outline of what seems to be an abandoned shack, something draws you to it's shadow, curiosity maybe?\n ", "Village Garden", "", "Tavern", "Abandoned Shack", "","");
	Locations AbandonedShack("Abandoned Shack", "After walking you arrive at the pitch black shack, it's presence alone stands as if you could die and it wouldn't so much as creek.\nAs you approach it closer to inspect the strange building you find that it becomes far too dark to see and proceed forward, at least safely.\nDo you decide to exit now? \n ", "", "", "Village Entrance", "", "", "");
	Locations Tavern("Tavern", "You enter into a tavern with bright almost blinding light. It is noisy as people chat around at the bar and entrance.\nYou are able to squeeze your way into the main room, most people have not taken notice of you and proceed about their bussiness.\nThere lays the bar to your right that carries the smells of beer to you alongside other aromas.\nYou also see on your left a fine finished table with a lantern on it.\n \n [1] Go to bar \n [2] Pick up lantern from table \n [3] Exit\n ", "", "", "", "Village Entrance", "Lantern","");
	Locations VillageGarden("Village Garden", "Village Garden description", "", "Village Entrance", "", "", "Sage", "");
	Locations Tunnel("Tunnel", "You awake on the floor, a throbbing pain coming from your head.\n As you open your eyes by some miracle the lantern is lit next to your head.\n  You arise, lantern in hand to find a crimson streak on the ground where you laid.\n You look up to find the trapdoor you entered from, out of reach.\n Looking around you notice you're in a cramped cavern.\n It is granite like with it's soft shimmer the walls give off as your lantern's light hits and exits the speckled walls.\n You see two pathways ahead of you, one to the left and one that continues straight. \n", "Mysterious Room", "", "", "Left Tunnel Room", "Sword","");
	Locations MysteriousRoom("Mysterious Room", " You are in a rigid, uneven granite room difficult to walk in. \n", "", "Tunnel", "", "Left Tunnel Room", "","");
	Locations LeftTunnelRoom("Left Tunnel Room", "As you go down the pathway to the left the granite gives way to finished stonework.\n You see at the end a shadow.\n But not just any shadow, a darkness your light fails to illuminate from where you're standing.\nIt's disorienting to your eyes, and startles your stomach as you try to make out what it is.\n A faint moaning can be heard, it seems to be alive\n This could be deadly. Do you approach the shadow to inspect? \n", "", "", "Tunnel", "Mysterious Room", "","");
	Locations StaircaseRoom("Staircase Room", "Staircase Room Description", "", "Mysterious Room", "", "", "", "Wraith");
	Locations MysteriousDoor("Mysterious Door", "You approach the mysterious door you managed to open, you can peel back the slab to head outside it seems.", "", "", "Hilly Fields", "Staircase Room", "","");
	Locations HillyFields("Hilly Fields", "As you step outside you squint from the morning haze, it only takes you another moment to notice the fog.\nIt's thick enough that on any other morning you'd be blinded by it's light.\nInstead you're blinded by this mist. You can barely see in front of you.\nYour fire is going down from your lamp, you need more light.\nYou can see two faint images, one to the north and the other to the west.\nWhere do you go?\n", "Image to the North", "", "Mysterious Door", "Image to the West", "","");
	Locations PlayerLocation("", "", "", "", "","","","");
	Locations AllLocations[] = { VillageEntrance , AbandonedShack , Tavern , VillageGarden, Tunnel , MysteriousRoom , LeftTunnelRoom, StaircaseRoom, MysteriousDoor, HillyFields};
	const int AllLocationsSize = 10;
	
	// Player starts at Village Entrance, so their initial location is Village Entrance;
	PlayerLocation = VillageEntrance;
	/*
	Testing commands. Replace with desired commands below, comment out above starting location:
	PlayerLocation = Tunnel; // Change location to whatever starting area you want
	PlayerInventory.AddItem("Lantern"); // add items you want
	PlayerInventory.AddItem("Sage");*/
	UI Interface;
	PlayerClass Player();
		cout << "Game Version 0.3" << endl;
		// Display Start Screen
	Interface.DisplayStartScreen();
	// Display Introduction
	Interface.DisplayIntroduction();
	while (true) //Will later be switched to !GameOver
		{
			// Display interface with options
			Interface.Menu(AllLocations, PlayerLocation, PlayerInventory, Game, AllLocationsSize);

		}
	system("pause");
	return 0;
}
