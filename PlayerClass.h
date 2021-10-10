#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class PlayerClass
{
private:
	//int inventory[];

public:
	string GetInventory();
	void Choice();
	void SetInventory(int);
	void DisplayInventory();
	void AddItem(string);
};
#endif