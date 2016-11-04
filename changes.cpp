#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cin;
#include "changes.h"

string modifiers(int num)
{
	string mod;
	if (num == 20)
	{
		mod = "(+5)";
	}
	else if (num == 19 || num == 18)
	{
		mod = "(+4)";
	}
	else if (num == 17 || num == 16)
	{
		mod = "(+3)";
	}
	else if (num == 15 || num == 14)
	{
		mod = "(+2)";
	}
	else if (num == 13 || num == 12)
	{
		mod = "(+1)";
	}
	else if (num == 11 || num == 10)
	{
		mod = "(+0)";
	}
	else if (num == 9 || num == 8)
	{
		mod = "(-1)";
	}
	else if (num == 7 || num == 6)
	{
		mod = "(-2)";
	}
	else if (num == 5 || num == 4)
	{
		mod = "(-3)";
	}
	else
	{
		mod = "(-4)";
	}
	return mod;
}
int classMod(int& strength, int& constitution, int& dexterity, int& intellect, int& wisdom, int& charisma, string race)
{
	string input;
	if (race == "dwarf")
	{
		constitution = constitution + 2;
	}
	else if (race == "hill dwarf")
	{
		constitution = constitution + 2;
		wisdom = wisdom + 1;
	}
	else if (race == "mountain dwarf")
	{
		constitution = constitution + 2;
		strength += 2;
	}
	if (race == "elf")
	{
		dexterity += 2;
	}
	else if (race == "high elf")
	{
		dexterity += 2;
		intellect += 1;
	}
	else if (race == "wood elf")
	{
		dexterity += 2;
		wisdom += 1;
	}
	else if (race == "dark elf")
	{
		dexterity += 2;
		charisma += 1;
	}
	if (race == "halfling")
	{
		dexterity += 2;
	}
	else if (race == "lightfoot halfling")
	{
		dexterity += 2;
		charisma += 1;
	}
	else if (race == "stout halfling")
	{
		dexterity += 2;
		constitution += 1;
	}
	if (race == "human")
	{
		strength += 1;
		constitution += 1;
		dexterity += 1;
		intellect += 1;
		wisdom += 1;
		charisma += 1;
	}
	if (race == "dragonborn")
	{
		strength += 2;
		charisma += 1;
	}
	if (race == "gnome")
	{
		intellect += 2;
	}
	else if (race == "forest gnome")
	{
		intellect += 2;
		dexterity += 1;
	}
	else if (race == "rock gnome")
	{
		intellect += 2;
		constitution += 1;
	}
	if (race == "half-elf")
	{
		charisma += 2;
		boostBy1(strength, constitution, dexterity, intellect, wisdom, charisma);
		boostBy1(strength, constitution, dexterity, intellect, wisdom, charisma);
	}
	if (race == "half-orc")
	{
		strength += 2;
		constitution += 1;
	}
	if (race == "tiefling")
	{
		charisma += 2;
		intellect += 1;
	}
	return 0;
}
int boostBy1(int& strength, int& constitution, int& dexterity, int& intellect, int& wisdom, int& charisma)
{
	string input;
	cout << "Please enter the first trait to boost (all lowercase): ";
	cin >> input;
	if (input == "strength")
	{
		strength += 1;
	}
	if (input == "constitution")
	{
		constitution += 1;
	}
	if (input == "dexterity")
	{
		dexterity += 1;
	}
	if (input == "intellect")
	{
		intellect += 1;
	}
	if (input == "wisdom")
	{
		wisdom += 1;
	}
	if (input == "charisma")
	{
		charisma += 1;
	}
	return 0;
}