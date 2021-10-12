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

void PlayerClass::AddItem(string itemID)
{
	inventory.push_back(itemID);
}

/*string PlayerClass::GetInventory()
{
	return inventory[i];
}*/

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
	
	cout << endl << "--------------------" << endl << endl;

}
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
void PlayerClass::CallInventory(int i)
{
	if (i == 5)
	{
		DisplayInventory();
	}
}