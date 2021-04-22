#include"PC.h"

using std::string;
using std::cout;
using std::cin;


//default constructor
PC::PC() {
}
/*
@param std::string that you want to print
@param int the number of words you want on a line
*/
std::string PC::getClass(){
    return charClass->className();
}
std::string PC::getRace() {
    return race->raceName();
}
void PC::printDescription(std::string toPrint, const int wordsPerLine){
    std::stringstream ss(toPrint);
    int counter = wordsPerLine;
    std::string word;
    while(ss >> word){
        if(counter <= 0){
            counter = wordsPerLine;
            std::cout << std::endl;
        }
        counter--;
        std::cout << word << " "; 
    }
    std::cout << std::endl;
}
void PC::setRace(std::unique_ptr<Race> setClass) {
    race = std::move(setClass);
}
void PC::setClass(std::unique_ptr<Character_Class> setClass) {
    charClass = std::move(setClass);
}
//Member functions for character class
void PC::setEXP(int exp) {
    _exp = exp;
}

void PC::setGold(int gold ) {

    _gold = gold;
}

void PC::setSTM(int stm) {
    _stm = stm;
}


void PC::resetSkills()
{
     military.setKnown(false);
     dueling.setKnown(false);
     agility.setKnown(false);
     alchemy.setKnown(false);
     arcana.setKnown(false);
     archery.setKnown(false);
     athletics.setKnown(false);
     endurance.setKnown(false);
     stealth.setKnown(false);
     awareness.setKnown(false);
     history.setKnown(false);
     reasoning.setKnown(false);
     survival.setKnown(false);
     willpower.setKnown(false);
     deception.setKnown(false);
     empathy.setKnown(false);
     brawling.setKnown(false);
     persuasion.setKnown(false);
     streetwise.setKnown(false);
     performance.setKnown(false);
     devotion.setKnown(false);
     craftsmanship.setKnown(false);
     runes.setKnown(false);
     thievery.setKnown(false);
}


