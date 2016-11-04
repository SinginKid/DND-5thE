#ifndef CHANGES_H
#define CHANGES_H
#include <string>
using std::string;
string modifiers(int num);
int classMod(int& strength, int& constitution, int& dexterity, int& intellect, int& wisdom, int& charisma, string race);
int boostBy1(int& strength, int& constitution, int& dexterity, int& intellect, int& wisdom, int& charisma);
#endif