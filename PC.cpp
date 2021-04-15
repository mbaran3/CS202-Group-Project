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
void PC::set_race(string race) {
	_RACE = race;
}

//Functeion to set class of PC
void PC::set_class(string _class){
	_CLASS = (_class);
}
