#include "Character_Class.h"


void Character_Class::printDescription() {
    cout << _description;
}
bool Character_Class::requiredSkill(PC &player) const{
    cout   << "No  class set" << endl;
}
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
        cout << "You have all the required skills for the class" << endl;
    else
        cout << "You do not have required skills" << endl;
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
