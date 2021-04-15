#pragma once
#ifndef PC_H
#define PC_H

#include<string>
#include<vector>
#include<iostream>

using std::endl;
using std::cout;
using std::string;
using std::vector;



//Class for Player Character

class PC
{
public:

	//default constructor
	PC();

	//Member Functions

	//used to set race of PC
	void set_race(string _race);
	//used to set Class of PC
	void set_class(string _class);

private:
	//_EXP(Experience), _STM(Stamina_, _GOLD(Gold)
	int _EXP, _STM, _GOLD;
	//Race & Class of of Player Character
	string _RACE, _CLASS;
    
};

#endif


