#pragma once
#ifndef CS202_GROUP_PROJECT_PC_H
#define CS202_GROUP_PROJECT_PC_H

#include<string>
#include<vector>
#include<iostream>
#include "Skill.hpp"
#include "Character_Class.h"
#include "Race.h"

using std::endl;
using std::cout;
using std::string;
using std::vector;
class Character_Class;


//Class for Player Character

class PC
{
public:

    Character_Class *charClass;
    Race *charRace;
    Military military;
    Dueling dueling;
    Agility agility;
    Alchemy alchemy;
    Arcana arcana;
    Archery archery;
    Athletics athletics;
    Endurance endurance;
    Stealth stealth;
    Awareness awareness;
    History history;
    Reasoning reasoning;
    Survival survival;
    Willpower willpower;
    Deception deception;
    Empathy empathy;
    Persuasion persuasion;
    Streetwise streetwise;
    Performance performance;
    Devotion devotion;
    Craftsmanship craftsmanship;
    Runes runes;
    Thievery thievery;

	//default constructor
	PC();

	//Member Functions
	int setGold(int gold);
	int setEXP(int exp);
	int setSTM(int stm);

	void setClass(Character_Class *setClass);
    void setRace(Character_Class *setRace);
	int checkGold();
	int checkSTM();


private:
    int _gold, _exp, _stm;

};

#endif


