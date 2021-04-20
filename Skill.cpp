#include "Skill.hpp"


//Returns if the skill is known or not
bool Skill::isKnown() {
    return _isKnown;
}
//Returns if the Skill is disabled or not
bool Skill::isDisabled(){
    return _isDisabled;
}
//Sets Disabled to true or false
void Skill::setDisabled(bool setTo) {
    _isDisabled = setTo;
}
//Sets the skill to true or false
void Skill::setKnown(bool setTo) {
    _isKnown = setTo;
}





