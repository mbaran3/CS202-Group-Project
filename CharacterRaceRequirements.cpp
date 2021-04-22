
#include"Race.hpp"

std::string Human::requirements() const {
	return
		"Humans specialize in: "
		"Deception, Empathy, Persuassion, Streetwise, Military, and Willpower. ";
}

std::string Orcs::requirements() const {
	return
	"Orcs specialize in: "
		"Athletics, Endurance, Brawling, Dueling, Survival, and Devotion. ";
}

std::string Dwarf::requirements() const {
	return
"Dwarves specialize in: "
"Athletics, Endurance, Willpower, Craftmanship, History, and Military. ";
}

std::string Elf::requirements() const {
	return
"Elves specialize in: "
"Agility, Archery, Dueling, Arcana, History, and Devotion. ";
}

std::string Gnome::requirements() const {
	return
"Gnomes specialize in: "
"Alchemy, Craftmanship, Performance, Persuassion, Streetwise, and Stealth. ";
}

std::string Catfolk::requirements() const {
	return
"Catfolk specialize in: "
"Agility, Awareness, Survival, Athletics, Stealth, and Brawling. ";
}


