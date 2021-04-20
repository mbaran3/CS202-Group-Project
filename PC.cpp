#include"PC.h"
#include<iostream>
#include<vector>
#include<string>

using std::string;
using std::cout;
using std::cin;

//default constructor
PC::PC() {

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
}
void PC::setClass(std::unique_ptr<Character_Class> setClass) {
    charClass = std::move(setClass);
}
//Member functions for character class
int PC::setEXP(int exp) {
    return exp;
}

int PC::setGold(int gold ) {
    return gold;
}

int PC::setSTM(int stm) {
    return stm;
}


