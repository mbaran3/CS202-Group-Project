#pragma once
#ifndef CS202_GROUP_PROJECT_PC_H
#include "Skill.hpp"
#include "Character_Class.h"
#include "Race.h"
#define CS202_GROUP_PROJECT_PC_H
#include <memory>
#include <sstream>
#include <iostream>


using std::endl;
using std::cout;
using std::string;
class Character_Class;
class Race;



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
    Brawling brawling;
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
    std::string getClass();
    std::string getRace();
    static void printDescription(std::string toPrint, const int wordsPerLine = 12);
    void setRace(std::unique_ptr<Race> setRace);
    void setClass(std::unique_ptr<Character_Class> setClass);
    void checkSkill();
    int checkGold();
    int checkSTM();


private:
    int _gold, _exp, _stm;

};

#endif

