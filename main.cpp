#include <iostream>
#include "PC.h"

int main() {


    //Creates a PC
    PC exampleBard;
    exampleBard.setClass(std::make_unique<Bard>());
    std::cout << Deception::description << std::endl;
    exampleBard.deception.setKnown(true);

    if(exampleBard.charClass->requiredSkill(exampleBard))
        std::cout << "You have all the skills required" << std::endl;
    else
        std::cout << "You don't have all the skills required" << std::endl;

    return 0;
}
