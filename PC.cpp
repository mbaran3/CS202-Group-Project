#include"PC.h"
#

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
std::string PC::getClass() {
    return charClass->className();
}
std::string PC::getRace() {
    return race->raceName();
}
void PC::printDescription(std::string toPrint, const int wordsPerLine) {
    std::stringstream ss(toPrint);
    int counter = wordsPerLine;
    std::string word;
    while (ss >> word) {
        if (counter <= 0) {
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
int PC::setEXP(int exp) {
    return exp;
}

int PC::setGold(int gold) {

    return gold;
}

int PC::setSTM(int stm) {
    return stm;
}

