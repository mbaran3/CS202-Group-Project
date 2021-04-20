#pragma once
#ifndef CS202_GROUP_PROJECT_CHARACTER_CLASS_HPP
#define CS202_GROUP_PROJECT_CHARACTER_CLASS_HPP

#include <iostream>
#include "PC.h"
class PC;



//Base Class "Character_Class"
class Character_Class {
public:

	void printDescription();
	virtual bool requiredSkill(PC& player) const = 0;
	
};

//Classes for Player character to choose from, derived from Character_Class
class Apothecary : public Character_Class{

public:
    bool requiredSkill(PC& player) const override;
	static std::string description;
};


class Bard : public Character_Class{

public:

	static std::string description;     
	bool requiredSkill(PC& player) const override;

};

class Brawler : public Character_Class{
public:
    bool requiredSkill(PC& player) const override;
	static std::string description;
};


class Knight : public Character_Class {
public:
    bool requiredSkill(PC& player) const override;
	static std::string description;
};

class Sage : public Character_Class {
public:
    bool requiredSkill(PC& player) const override;
	static std::string description; 
};

class Thief : public Character_Class {
public:
    bool requiredSkill(PC& player) const override;
	static std::string description; 
};

class Wildlander : public Character_Class {
public:
    bool requiredSkill(PC& player) const override;
	static std::string description;
};

#endif //CS202_GROUP_PROJECT_CHARACTER_CLASS