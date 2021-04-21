#pragma once
#include"Character_Class.h"
#include"PC.h"

#ifndef CS202_GROUP_PROJECT_RACE_H
#define CS202_GROUP_PROJECT_RACE_H

//base class for Race
class Race {
public:
	void printDescription();
	virtual bool requiredSkill(PC& player) const;
	std::string _description;
};


//All races in game 
class Human : public Race {
public:
	static std::string description;

};

class Orcs : public Race {
public:
	static std::string description;
};

class Dwarf : public Race {
public:
	static std::string description;
};

class Elf : public Race {
public:
	static std::string description;
};

class Gnome : public Race {
public: 
		static std::string description;
};

class Catfolk : public Race {
public:
	static std::string description;

};












#endif // !1

