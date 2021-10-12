#include "PlayerClass.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

/* PlayerClass::PlayerClass()
{
	
}*/ 

/*
Add Item adds an item ID to the vector Inventory
*/
void PlayerClass::AddItem(string itemID)
{
	inventory.push_back(itemID);
}

/*string PlayerClass::GetInventory()
{
	return inventory[i];
}*/
/*
Displays Inventory through loop
*/
void PlayerClass::DisplayInventory()
{
	cout << endl << "Inventory: " << endl;
	cout << "--------------------" << endl;

	for (const string i: inventory)
	{
		cout << " "<<  i << " ";
		if (i != inventory.at(inventory.size()-1))
		{
		cout << " | ";
		}
	}
	if (inventory.empty())
	{
		cout << "INVENTORY IS EMPTY";
	}
	cout << endl << "--------------------" << endl << endl;

}
/*
Searches through inventory for item using a sequential search. If found, returns true
*/
bool PlayerClass::searchInventory(string item)
{
	for (const string i : inventory)
	{
		if (i == item)
		{
			return true;
		}
	}
	return false;
}
/*
Keybind for player to display the inventory
*/
void PlayerClass::CallInventory(int i)
{
	if (i == 5)
	{
		DisplayInventory();
	}
}