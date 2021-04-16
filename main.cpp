#include <iostream>
#include "PC.h"

int main() {


    //Creates a PC
    PC exampleCharacter;
  
    //Prints the description of archery from the character creation book.
    std::cout << Archery::description << std::endl;

    //Sets archery known to true
    //setKnown requires a true or false
    exampleCharacter.archery.setKnown(true);

    if(exampleCharacter.archery.isKnown()){
        std::cout << "You know archery" << std::endl;
    }
    //Sets archery to disabled after the skill is used
    //setDisabled also requires a true or false
    exampleCharacter.archery.setDisabled(true);
    if(exampleCharacter.archery.isDisabled()){
        std::cout << "The archery skill is Disabled" << std::endl;
    }
    //Example of setting a class
    //Sets Character_Class in PC to a pointer of the Apothecary class
    exampleCharacter.setClass(new Apothecary);
    exampleCharacter.charClass->requiredSkill( exampleCharacter);



    return 0;
}
