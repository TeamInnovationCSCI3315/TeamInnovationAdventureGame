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
void GameClass::VillageDescr()
{
	cout << "You find yourself looking at a village as you sit at the entrance of it. There is the light hooting of an owl as you start walking." << endl;
	cout << "As you look around you notice how dark it is, the village allows you to barely maneuver around with the faint candlelight from the street lamps." << endl;
	cout << "In one direction, following the road to the right you notice a tavern up ahead with bright lights and the sounds of commerce. This could be a good place to find information and help and it is probably the brightest place." << endl;
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
}