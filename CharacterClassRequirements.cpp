
#include "Character_Class.h"



std::string Apothecary::requirements() const {
	return
	"Apothecaries specialize in: "
		"Alchemy, Craftmanship, Persuassion, Reasoning, Survival, and Arcana. ";
}

std::string Bard::requirements() const {
	return
"Bards specialize in: "
"Performance, Deception, Empathy, Persuassion, Streetwise, and History. ";
}

std::string Brawler::requirements() const {
	return
"Brawlers specialize in: "
"Brawling, Athletics, Endurance, Dueling, Streetwise, and Willpower. ";
}

std::string Knight::requirements() const {
	return
"Knights specialize in: "
"Military, Athletics, Awareness, Dueling, Devotion, and Willpower. ";
}

std::string Sage::requirements() const {
	return
"Sages specialize in: "
"History, Arcana, Runes, Reasoning, Craftmanship, and Devotion. ";
}

std::string Thief::requirements() const {
	return
"Thieves specialize in: "
"Deception, Reasoning, Agility, Stealth, Streetwise, and Thievery. ";
}


std::string Wildlander::requirements() const {
	return
"Wildlanders specialize in: "
"Archery, Survival, Endurance, Awareness, Stealth, and Athletics. ";
}
