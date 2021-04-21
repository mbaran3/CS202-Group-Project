#include <iostream>
#include "PC.h"
#include "Race.hpp"
#include "Character_Class.h"
#include "Character_Creation.h"

int main() {

    PC example;
    Character_Creation(example);

    //Creates a PC
    PC exampleBard;
    exampleBard.setClass(std::make_unique<Bard>());
    exampleBard.deception.setKnown(false);
    exampleBard.setRace(std::make_unique<Elf>());
    std::cout << "Your Class is " << example.getClass() << " and Race " << example.getRace();
    std::cout << std::endl;

    if(exampleBard.charClass->requiredSkill(exampleBard))
        std::cout << "You have all the skills required" << std::endl;
    else
        std::cout << "You don't have all the skills required" << std::endl;

    return 0;
}
