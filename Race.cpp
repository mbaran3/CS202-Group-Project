#include "Race.hpp"

#include "PC.h"
#include "Skill.hpp"



bool Human::requiredSkill(PC& player) const {
    int counter = 0;
    if (player.deception.isKnown())
        counter++;
    if (player.empathy.isKnown())
        counter++;
    if (player.persuasion.isKnown())
        counter++;
    if (player.streetwise.isKnown())
        counter++;
    if (player.military.isKnown())
        counter++;
    if (player.willpower.isKnown())
        counter++;
    if (counter >= 2)
        return true;
    else
        return false;
}

bool Orcs::requiredSkill(PC& player) const {
    int counter = 0;
    if (player.athletics.isKnown())
        counter++;
    if (player.endurance.isKnown())
        counter++;
    if (player.brawling.isKnown())
        counter++;
    if (player.dueling.isKnown())
        counter++;
    if (player.survival.isKnown())
        counter++;
    if (player.devotion.isKnown())
        counter++;
    if (counter >= 2)
        return true;
    else
        return false;
}
bool Elf::requiredSkill(PC& player) const {
    int counter = 0;
    if (player.agility.isKnown())
        counter++;
    if (player.archery.isKnown())
        counter++;
    if (player.dueling.isKnown())
        counter++;
    if (player.arcana.isKnown())
        counter++;
    if (player.history.isKnown())
        counter++;
    if (player.devotion.isKnown())
        counter++;
    if (counter >= 2)
        return true;
    else
        return false;
}

bool Gnome::requiredSkill(PC& player) const {
    int counter = 0;
    if (player.alchemy.isKnown())
        counter++;
    if (player.craftsmanship.isKnown())
        counter++;
    if (player.performance.isKnown())
        counter++;
    if (player.persuasion.isKnown())
        counter++;
    if (player.streetwise.isKnown())
        counter++;
    if (player.stealth.isKnown())
        counter++;
    if (counter >= 2)
        return true;
    else
        return false;
}

bool Dwarf::requiredSkill(PC& player) const {
    int counter = 0;
    if (player.athletics.isKnown())
        counter++;
    if (player.endurance.isKnown())
        counter++;
    if (player.willpower.isKnown())
        counter++;
    if (player.craftsmanship.isKnown())
        counter++;
    if (player.history.isKnown())
        counter++;
    if (player.military.isKnown())
        counter++;
    if (counter >= 2)
        return true;
    else
        return false;
}

bool Catfolk::requiredSkill(PC& player) const {
    int counter = 0;
    if (player.agility.isKnown())
        counter++;
    if (player.survival.isKnown())
        counter++;
    if (player.athletics.isKnown())
        counter++;
    if (player.awareness.isKnown())
        counter++;
    if (player.stealth.isKnown())
        counter++;
    if (player.brawling.isKnown())
        counter++;
    if (counter >= 2)
        return true;
    else
        return false;
}