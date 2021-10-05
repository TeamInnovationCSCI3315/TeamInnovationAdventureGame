// TeamInnovationAdventureGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "PlayerClass.h"
#include "GameClass.h"
#include "UI.h"
#include <iostream>
using namespace std;

int main()
{
	GameClass Game; 
	UI Interface;
	Interface.DisplayLocation(Game.GetLocation());
	return 0;
}
