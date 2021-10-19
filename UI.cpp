#include "GameClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
GameClass Game(string n, string d);
/*
	This displays the location, asks the player choice and takes the player input to be returned to the main cpp file.
*/
void UI::DisplayIntroduction()
{
	string playername;
	cout << "Who are you Dreamer?\n";
	cin >> playername;
	cout << "Interesting, I believe I am familiar.\n";
	cout << "You were busy " << playername << ", your life had been going along as it was, you were tired.\nSo very tired.\n";
	cout << "You went to sleep on one of your worse days, and when you slept you dreamt.\n";
	cout << "You fell into such a terrible nightmare, one that you cannot wake up from it.\n";
	system("pause");
	cout << "You fell into a world known as 'The First Strand', along The Bridge to the world of Fiction.\n";
	cout << "You'll learn more of what I mean in due time " << playername << " all in due time.\n";
	system("pause");
	cout << "I will be your guide through this bridge, think of me as your deep concious, in a way I am that.\n";
	cout << "Your goal as you know it is to find a way to wake up, to return to reality in the only way you know that is to dive into the dream.\n";
	cout << "I wish you the best of luck, I know you can navigate the knots of this world, you'll find them, they pull you to them.\n I shall be seeing you very soon.\n";
	system("pause");
	system("CLS");
}
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

/*void UI::DrinkDesc()
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

}*/