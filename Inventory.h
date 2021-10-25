#ifndef INVENTORY_H
#define INVENTORY_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

class Inventory
{
private:
	vector<string> inventory = {};
public:
	//string GetInventory();
	// void Choice();
	void DisplayInventory();
	void AddItem(string);
	bool searchInventory(string);
	void CallInventory(int);
};
#endif