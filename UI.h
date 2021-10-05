#ifndef UI_H
#define UI_H
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class UI
{
public: 
	void DisplayInventory();
	void DisplayChoices();
	void UseItem(string);
	void DisplayLocation(string);
};
#endif
