#pragma once
#ifndef CS202_GROUP_PROJECT_CHARACTER_CLASS_HPP
#define CS202_GROUP_PROJECT_CHARACTER_CLASS_HPP
#include <iostream>
#include "PC.h"

class PC;
//Base Class "Character_Class"
class Character_Class {
public:

    virtual std::string className() {return "No class set";}
    virtual bool requiredSkill(PC& player) const = 0;
    
};

//Classes for Player character to choose from, derived from Character_Class
class Apothecary : public Character_Class{

public:
    std::string className() override {return "Apothecary";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};


class Bard : public Character_Class{

public:
    std::string className() override {return "Bard";}
    static std::string description;
    bool requiredSkill(PC& player) const override;

};

class Brawler : public Character_Class{
public:
    std::string className() override {return "Brawler";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};


class Knight : public Character_Class {
public:
    std::string className() override {return "Knight";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Sage : public Character_Class {
public:
    std::string className() override {return "Sage";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Thief : public Character_Class {
public:
    std::string className() override {return "Thief";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Wildlander : public Character_Class {
public:
    std::string className() override {return "Wildlander";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

#endif //CS202_GROUP_PROJECT_CHARACTER_CLASS
