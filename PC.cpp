#include"PC.h"
#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::cout;
using std::cin;

//default constructor
PC::PC() {

}

//Function to set race of PC
string PC::set_race(string race) {
	_RACE = race;
	return 0;
}

//Functeion to set class of PC
string PC::set_class(string _class){
	_CLASS = (_class);
	return 0;
}
