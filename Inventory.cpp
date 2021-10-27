#include "Inventory.h"
#include "UI.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
/*
Inventory Class

AddItem Function pushes an item by its ID into a vector
DisplayInventory displays the inventory's contents 
searchInventory searches to see if an item is within the player's inventory
*/
void Inventory::AddItem(string itemID)
{
	inventory.push_back(itemID);
}
void Inventory::RemoveAllItems()
{
	while (!inventory.empty())
	{
		inventory.pop_back();
	}
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
bool Inventory::SearchInventory(string item)
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