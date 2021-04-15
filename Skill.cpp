//
// Created by micha on 4/9/2021.
//

#include "Skill.hpp"


std::string Alchemy::description=
        "Alchemy represents your "
        "knowledge of the alchemical "
        "process and your ability to "
        "concoct and brew potions of "
        "all varieties. Alchemical brews "
        "include elixirs that cure diseases w"
        "and explosive concoctions.";


std::string Arcana::description =
        "Arcana represents your knowledge "
        "of magic. Te ability to wield magic is "
        "an exceptionally rare gift, but even those "
        "without such talent can wield runebound "
        "shards. Your knowledge of the arcane has "
        "allowed you to gather a small collection of "
        "offensive shards fame and blasting.";

std::string Archery::description =
        "Archery represents your training with "
        "a bow or crossbow. As an archer, you "
        "likely prefer to stay as far from combat as "
        "possible so you can fre on your enemies "
        "from range.";

std::string Brawling::description =
        "Brawling represents your training with "
        "a bow or crossbow. As an archer, you "
        "likely prefer to stay as far from combat as "
        "possible so you can fre on your enemies "
        "from range.";

std::string Dueling::description =
        "Dueling represents your training with "
        "a bow or crossbow. As an archer, you "
        "likely prefer to stay as far from combat as "
        "possible so you can fre on your enemies "
        "from range.";

std::string Military::description =
        "Military represents your knowledge of and "
        "training in the disciplined fighting styles of war. "
        "Military acumen and warcraft have their place on any "
        "battlefield, whether your enemies are few or many.";



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





