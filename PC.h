#pragma once
#ifndef CS202_GROUP_PROJECT_PC_H
#define CS202_GROUP_PROJECT_PC_H

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
	int setGold(int gold);
	int setEXP(int exp);
	int setSTM(int stm);

	int checkGold();
	int checkSTM();





private:
	//_EXP(Experience), _STM(Stamina_, _GOLD(Gold)
	int _EXP, _STM, _GOLD;






};

#endif


