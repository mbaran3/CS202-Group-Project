#pragma once
#ifndef CS202_GROUP_PROJECT_CHARACTER_CLASS_HPP
#define CS202_GROUP_PROJECT_CHARACTER_CLASS_HPP
#include <iostream>


//Base Class "Character_Class" 
class Character_Class {
public:
	void printDescription();

protected:

private:
	


};


//Classes for Player character to choose from, derived from Character_Class
class Apothecary : public Character_Class{

public:
	static std::string description = "Apothecaries ply their trade in many of the towns and Villages of Terrinoth."
		"They brew curative potions and other alchemical concoctions,"
		" their knowledge of herbs, minberals and other chemicals to great effect. "
}

class Bard : public Character_Class{

public:
	static std::string description = "Trained at Bardic colleges, Bards learn dozens of instruments, songs, sagas, and scrapes of lore 
		"to perform and entertain audiences. They also have access "
		" to bardic magic, allowing them to give aid in healing through songs."
}

class Brawler : public Character_Class{

public:
	static std::string description = "Self-taught fighters of hand to hand combat, 
		"Many brawlers make a living either through" 
		"fighting for spectecal or offering their services as "
		"bodygaurds. Some even take up bounty hunting"
}

class Knight : public Character_Class {

public:
	static std::string _description = "Noble warriors traiend in all arts of combat and outfitted with the finest weapons and armour by their 
		" noble patron or order; all knights uphold to the codes and ideals of"
		" chivalry and nobility."
}

class Sage : public Character_Class {

public:
	static std::string _description = "A seeker of knowledge and ancient magic, 
		"Sages dedicate most of their lives to reading, writing, and studying of ancient books "
		 "and all forms of arcana"

};

class Theif : public Character_Class {

public:
	static std::string _description = "Thieves are those who are in the buisness and practice of illegal behavior and trade; 
		"many Theifs are trained in the \n art of deception and stealth,
		"peffering to  avoid combat and violence if possible" 
};

class Wildlander : public Character_Class {

public:
	static std::string _description = "Hardy, independent folks,
		"Wildlanders are able to thrive off the lands of Terrinoth "
		" weeks and months on end. Some take thier skills of hunting and logging for extra gold \n but seldom need to return to civilization";
};

#endif //CS202_GROUP_PROJECT_CHARACTER_CLASS