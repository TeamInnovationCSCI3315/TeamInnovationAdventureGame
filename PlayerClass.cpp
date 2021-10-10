#include "PlayerClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

PlayerClass::PlayerClass()
{
	int inventory[10] = {};
}

void PlayerClass::SetInventory(int itemID)
{
	inventory[i] = itemID;
}

string PlayerClass::GetInventory()
{
	return inventory[i];
}

void PlayerClass::DisplayInventory()
{
	for (int i = 0; i < inventory[i].max_size(); i++)
	{
		cout << i + 1 << ".) " << inventory[i] << endl;
	}
}
void PlayerClass::AddItem(string item)
{

}