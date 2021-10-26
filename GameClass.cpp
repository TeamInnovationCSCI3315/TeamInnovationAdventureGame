#include "GameClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include "Inventory.h"
#include "Locations.h"
#include "PlayerClass.h"
using namespace std;
/*
	This calls the player location and returns the location to the player to be displayed in UI.
*/
GameClass::GameClass()
{
	
}
void GameClass::SetLocation(string location)
{
	playerLocation = location;
}
string GameClass::GetLocation()
{
	return playerLocation;
}
void GameClass::Quit(int i)
{
	string tempinput="";
	if (i == 0)
	{
		cout << "Are you sure you would like to quit the game? Your progress will not be saved (Press Y to quit) \n";
		cin >> tempinput;
		if (tempinput == "Y" || tempinput ==  "y")
		{
			exit(0);
		}

	}
}

void GameClass::TunnelPuzzle()
{
	int choice;

	cout << "Who is reading this to you?" << endl;
	cout << "-----------------" << endl;
	cout << "1.) The Narrator " << endl;
	cout << "2.) I am (me) " << endl;
	cout << "3.) Nobody " << endl;
	cout << "4.) Deep Consciousness " << endl;

	while (choice != 4)
	{
		cout << "Choose your answer: ";
		cin >> choice;
		cout << endl;
		cout << "You are incorrect! Speak to me again and try my riddles from the beginning." << endl;
		return;
	}
	if (choice == 4)
	{
		cout << "You are correct! Onto the next one..." << endl;
	}
	

	int choice2;

	cout << "What is down the other tunnel path?" << endl;
	cout << "-----------------" << endl;
	cout << "1.) Nothing " << endl;
	cout << "2.) The way out " << endl;
	cout << "3.) A shadow " << endl;
	cout << "4.) A light source " << endl;

	while (choice2 != 3)
	{
		cout << "Choose your answer: ";
		cin >> choice;
		cout << endl;
		cout << "You are incorrect but I will spare you another chance. Please answer again." << endl;
	}
	if (choice2 == 3)
	{
		cout << "You are correct! Onto the next one..." << endl;
	}



	int choice3;

	cout << "Where are you right now? Truly, " << endl;
	cout << "-----------------" << endl;
	cout << "1.) Shack outside of town " << endl;
	cout << "2.) A knot between strands " << endl;
	cout << "3.) The first strand " << endl;
	cout << "4.) Home, in bed " << endl;

	while (choice3 != 2)
	{
		cout << "Choose your answer: ";
		cin >> choice;
		cout << endl;
		cout << "You are incorrect but I will spare you another chance. Please answer again." << endl;
	}
	if (choice3 == 2)
	{
		cout << "You are correct! Onto the next one..." << endl;
	}



}

/*void GameClass::VillageDescr()
{
	cout << "You find yourself looking at a village as you sit at the entrance of it. There is the light hooting of an owl as you start walking." << endl;
	cout << "As you look around you notice how dark it is, the village allows you to barely maneuver around with the faint candlelight from the street lamps." << endl;
	cout << "In one direction, following the road to the east you notice a tavern up ahead with bright lights and the sounds of commerce. This could be a good place to find information and help and it is probably the brightest place." << endl;
	cout << "In the other direction you notice the lights grow scarcer and scarcer until you can barely see the outline of what seems to be an abandoned shack, something draws you to it's shadow, curiosity maybe?" << endl;
	cout << "Where do you go?" << endl;
}
void GameClass::TavernDescr()
{
	cout << "You enter into a tavern with bright almost blinding light. It is noisy as people chat around at the bar and entrance." << endl;
	cout << "You are able to squeeze your way into the main room, most people have not taken notice of you and proceed about their bussiness." << endl;
	cout << "There lays the bar to your right that carries the smells of beer to you alongside other aromas." << endl;
	cout << "You also see on your left a fine finished table with a lantern on it." << endl;
	cout << "Where do you go?" << endl;
}
void GameClass::AbandonDescr()
{
	cout << "After walking you arrive at the pitch black shack, it's presence alone stands as if you could die and it wouldn't so much as creek." << endl;
	cout << "As you approach it closer to inspect the strange building you find that it becomes far too dark to see and proceed forward, at least safely." << endl;
	cout << "Do you decide to exit now?" << endl;
}
void GameClass::AbandonDescrL()
{
	//This the description for the player when they have the lantern and go to the Abandoned Shack it SHOULD NOT be used otherwise
	cout << "With the lantern in hand you head towards the abandoned shack once again." << endl;
	cout << "It seems to be made out of a rotting, creeping willow of some kind or another, though it splinters out as a thorny hide." << endl;
	cout << "It has a flimsy door held together by sheer luck, and a rusted doorknob is the only thing standing between you and the inside." << endl;
	cout << "Do you open the door and proceed inside?"<<endl;
}*/