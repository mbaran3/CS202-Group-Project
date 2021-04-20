
#include"Character_Class.h"
#include<iostream>



std::string Apothecary::description = "Apothecaries ply their trade in many of the towns and Villages of Terrinoth."
		"They brew curative potions and other alchemical concoctions,"
	" their knowledge of herbs, minberals and other chemicals to great effect. ";

bool Apothecary::requiredSkill(PC &player) const {

    int counter = 0;

    if(player.alchemy.isKnown())
        counter++;
    if(player.craftsmanship.isKnown())
        counter++;
    if(player.persuasion.isKnown())
        counter++;
    if(player.reasoning.isKnown())
        counter++;
    if(player.arcana.isKnown())
        counter++;
    if(counter > 2)
        return true;
    else
        return false;
}

bool Bard::requiredSkill(PC &player) const {

    int counter = 0;

    if(player.deception.isKnown())
        counter++;
    if(player.performance.isKnown())
        counter++;
    if(player.deception.isKnown())
        counter++;
    if(player.empathy.isKnown())
        counter++;
    if(player.persuasion.isKnown())
        counter++;
    if(player.streetwise.isKnown())
        counter++;
    if(player.history.isKnown())
        counter++;
    if(counter > 2)
       return true;
    else
        return false;
}

bool Brawler::requiredSkill(PC &player) const {
    int counter = 0;
    if(player.athletics.isKnown())
        counter++;
    if(player.endurance.isKnown())
        counter++;
    if(player.dueling.isKnown())
        counter++;
    if(player.streetwise.isKnown())
        counter++;
    if(player.willpower.isKnown())
        counter++;
    if(counter > 2)
        return true;
    else
        return false;
}
bool Knight::requiredSkill(PC &player) const {
    int counter = 0;
    if(player.military.isKnown())
        counter++;
    if(player.athletics.isKnown())
        counter++;
    if(player.awareness.isKnown())
        counter++;
    if(player.dueling.isKnown())
        counter++;
    if(player.devotion.isKnown())
        counter++;
    if(player.willpower.isKnown())
        counter++;
    if(counter > 2)
        return true;
    else
        return false;
}
bool Sage::requiredSkill(PC &player) const {
    int counter = 0;
    if(player.history.isKnown())
        counter++;
    if(player.runes.isKnown())
        counter++;
    if(player.arcana.isKnown())
        counter++;
    if(player.runes.isKnown())
        counter++;
    if(player.reasoning.isKnown())
        counter++;
    if(player.craftsmanship.isKnown())
        counter++;
    if(player.devotion.isKnown())
        counter++;
    if(counter > 2)
        return false;
    else
        return true;
}
bool Thief::requiredSkill(PC &player) const {
    int counter = 0;
    if(player.deception.isKnown())
        counter++;
    if(player.agility.isKnown())
        counter++;
    if(player.stealth.isKnown())
        counter++;
    if(player.streetwise.isKnown())
        counter++;
    if(player.thievery.isKnown())
        counter++;
    if(player.reasoning.isKnown())
        counter++;
    if(counter > 2)
        return true;
    else
        return false;
}
bool Wildlander::requiredSkill(PC &player) const {
    int counter = 0;
    if(player.archery.isKnown())
        counter++;
    if(player.survival.isKnown())
        counter++;
    if(player.endurance.isKnown())
        counter++;
    if(player.awareness.isKnown())
        counter++;
    if(player.stealth.isKnown())
        counter++;
    if(player.athletics.isKnown())
        counter++;
    if(counter > 2)
        return true;
    else
        return false;
}

