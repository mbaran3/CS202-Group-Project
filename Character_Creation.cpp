#include"PC.h"
#include<iostream>
#include<string>

using std::endl;
using std::string;
using std::cout;
using std::cin;
using std::vector;


//function used to initiate character creation 

void Character_Creation(PC& pc) {
	cout << "Before you jump into your frst adventure, you will need to" << '\n';
	cout << "create a character—an avatar that will represent you in the" << '\n';
	cout << "Runebound World" << endl;

	while (cin.get() != '\n');


	cout << "Your character (also called a hero) is a combination of mechanical statistics" << '\n';
	cout << "and your imagination" << '\n';

	while (cin.get() != '\n');

	cout << "Your Character is based on 3 aspects" << '\n';
	cout << "Your characters' Race, a class, and a set of skills " << endl;

	while (cin.get() != '\n');

	cout << "The stories in this game take place in the realm of Terrinorth." << '\n';
	cout << "Terrinorth is predominantly settled by 'HUMANS', though 'ORCS' are also common" << '\n';
	cout << "through out the free citites and the wilderness between them. Terrinorth is crowned in the north" << '\n';
	cout << "by the great Dunwarr Mountains, the ancestral home of the 'DWARVES'. " << '\n';
	cout << "The Emerald boughs of the Aymhelin shelter the settlements of the Latari 'ELVES' and define " << '\n';
	cout << "Although less common, some 'GNOME' communties and 'CATFOLK' tribes also call Terrinorth their home" << endl;

	while (cin.get() != '\n');

	cout << "Choosing your race is an important first step, as this decision contributes " << '\n';
	cout << "To your identity, by establishing your general apperance, and your natrual talents " << '\n';

	while (cin.get() != '\n');

	cout << "Select a Race: " << endl;
	//swtich statement to assing race to player character 
	cout << " 1) Human " << endl;
	cout << " 2) Orc " << endl;
	cout << " 3) Dwarf " << endl;
	cout << " 4) Elf " << endl;
	cout << " 5) Gnome " << endl;
	cout << " 6) Catfolk " << endl; 

	int race_menu_choice;

	switch (race_menu_choice) {
	case 1: 
		cout << "Humans are a short-lived race, but diverse and resilient." << '\n';
		cout << "They are larger and useally stronger than elves, dwarves, and gnomes, " << '\n';
		cout << "and despite their short lifespans -or perhaps because of them - humans are swift " << '\n';
		cout << "to learn and adapt? " << endl; 

		cout << "would you like to choose human? " << endl;
		cout << "(type Y / N) " << endl;

		break;
	case 2:

	}











}