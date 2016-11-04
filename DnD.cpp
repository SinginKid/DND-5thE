// Joshua Bartling
// Fist Project
// 9/29/16
// Creates a D&D character based on user inputs
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;
using std::getline;
#include <stdlib.h>
using std::rand;
using std::srand;
#include <time.h>
int getNumber(void);
#include "changes.h"
void printOut(string name, string race, string alignment, string cclass, int strength, int constitution, 
	int dexterity, int intellect, int wisdom, int charisma);
int main()
{
	string choose[6] = {"strength ","constitution ","dexterity ","intellect ","wisdom ","charisma "};
	string name;
	string race;
	string alignment;
	string cclass;  //stores character class
	int strength = 0;
	int constitution = 0;
	int dexterity = 0;
	int intellect = 0;
	int wisdom = 0;
	int charisma = 0;
	int number = 0;
	cout << "Welcome! And thank you for testing this program " <<
		"SPENZER" << endl << "This program will create your D&D character" << endl;
	cout << "Please enter your name" << endl;
	getline(cin, name);
	cout << endl << "Please enter your race" << endl;
	getline(cin, race);
	cin.ignore();
	cout << endl << "Please enter your alignment" << endl;
	getline(cin, alignment);
	cin.ignore();
	cout << endl << "Please enter your class" << endl;
	cin >> cclass;
	int i = 1;
	while (i < 7)
	{
		number = getNumber();
		string input = "asdf";
		while (input.compare("strength") != 0 || input.compare("constitution") != 0 || input.compare("dexterity") != 0 || input.compare("intellect") != 0 ||
			input.compare("wisdom") != 0 || input.compare("charisma") != 0)
		{
			cout << "You may still choose: " << endl;
			for (int i = 0; i < 6;i++)
			{
				cout << choose[i];
			}
			cout  << endl << "Your " << i << " roll is " << number;
			cout << endl << "What would you like to assign this to?" << endl
				<< "(Please enter in lower case, spelling matters!)" << endl;
			cin >> input;
			if (input == "strength")
			{
				strength = number;
				choose[0] = "";
				break;
			}
			if (input == "constitution")
			{
				constitution = number;
				choose[1] = "";
				break;
			}
			if (input == "dexterity")
			{
				dexterity = number;
				choose[2] = "";
				break;
			}
			if (input == "intellect")
			{
				intellect = number;
				choose[3] = "";
				break;
			}
			if (input == "wisdom")
			{
				wisdom = number;
				choose[4] = "";
				break;
			}
			if (input == "charisma")
			{
				charisma = number;
				choose[5] = "";
				break;
			}
		}
		i++;
	}
	classMod(strength, constitution, dexterity, intellect, wisdom, charisma, race);
	printOut(name, race, alignment, cclass, strength, constitution, dexterity, intellect, wisdom, charisma);
}
void printOut(string name, string race, string alignment, string cclass, int strength, int constitution, int dexterity, int intellect, int wisdom, int charisma)
{
	cout << "Character" << endl;
	cout << "----------------------------------"
		<< endl << "Name: " << name
		<< endl << "Race: " << race
		<< endl << "Alignment: " << alignment
		<< endl << "Class: " << cclass
		<< endl << "Strength: " << strength << modifiers(strength)
		<< endl << "Constitution: " << constitution << modifiers(constitution)
		<< endl << "Dexterity: " << dexterity << modifiers(dexterity)
		<< endl << "Intellect: " << intellect << modifiers(intellect)
		<< endl << "Wisdom: " << wisdom << modifiers(wisdom)
		<< endl << "Charisma: " << charisma << modifiers(charisma) << endl;
}
int getNumber(void)
{
	int number[5] = {};
	srand(time(0));
	for (int i = 0; i < 4; i++)
	{
		number[i] = rand() % 6 + 1;
	}
	if (number[3] > number[0])
	{
		number[4] = number[0];
		number[0] = number[3];
		number[3] = number[4];
	}
	else if (number[3] > number[1])
	{
		number[4] = number[1];
		number[1] = number[3];
		number[3] = number[4];
	}
	else if (number[3] > number[2])
	{
		number[4] = number[2];
		number[2] = number[3];
		number[3] = number[4];
	}
	int adding = number[0] + number[1] + number[2];
	return adding;
}