#include "Inventory.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
void Inventory::AddItem(string itemID)
{
	inventory.push_back(itemID);
}
void Inventory::DisplayInventory()
{
	cout << endl << "Inventory: " << endl;
	cout << "--------------------" << endl;

	for (const string i : inventory)
	{
		cout << " " << i << " ";
		if (i != inventory.at(inventory.size() - 1))
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
bool Inventory::searchInventory(string item)
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
void Inventory::CallInventory(int i)
{
	if (i == 5)
	{
		DisplayInventory();
	}
}