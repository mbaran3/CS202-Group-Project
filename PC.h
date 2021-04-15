#pragma once
#ifndef CS202_GROUP_PROJECT_PC_H
#define CS202_GROUP_PROJECT_PC_H

#include<string>
#include<vector>
#include<iostream>
#include "Skill.hpp"

using std::endl;
using std::cout;
using std::string;
using std::vector;



//Class for Player Character

class PC
{
public:

    Military military;
    Agility agility;
    Alchemy alchemy;
    Arcana arcana;
    Archery archery;

	//default constructor
	PC();

	//Member Functions
	int setGold(int gold);
	int setEXP(int exp);
	int setSTM(int stm);

	int checkGold();
	int checkSTM();
    

};

#endif


