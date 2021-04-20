#pragma once
#ifndef CS202_GROUP_PROJECT_PC_H
#define CS202_GROUP_PROJECT_PC_H

#include<string>
#include<vector>
#include<iostream>
#include <memory>
#include <sstream>
#include "Skill.hpp"
#include "Race.hpp"
#include "Character_Class.h"

using std::endl;
using std::cout;
using std::string;
using std::vector;
class Character_Class;


//Class for Player Character

class PC
{
public:

    std::unique_ptr<Character_Class> charClass;
    std::unique_ptr<Race> race;
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
    static void printDescription(std::string toPrint, const int wordsPerLine = 12);
	void setClass(std::unique_ptr<Character_Class> setClass);
    void setRace(std::unique_ptr<Race> setRace);
    void checkSkill();
	int checkGold();
	int checkSTM();


private:
    int _gold, _exp, _stm;

};

#endif


