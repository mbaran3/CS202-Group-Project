#include "Character_Class.h"


void Character_Class::printDescription() {
    cout << _description;
}
void Character_Class::requiredSkill(PC &player) const{
    cout   << "No  class set" << endl;
}
void Apothecary::requiredSkill(PC &player) const {
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
        cout << "You have all the required skills" << endl;
    else
        cout << "You do not have required skills" << endl;
}