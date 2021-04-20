#include <iostream>
#include "PC.h"

int main() {


    //Creates a PC
    PC exampleBard;
    exampleBard.setClass(std::make_unique<Bard>());
    exampleBard.deception.setKnown(true);
    PC::printDescription(Bard::description);

    if(exampleBard.charClass->requiredSkill(exampleBard))
        std::cout << "You have all the skills required" << std::endl;
    else
        std::cout << "You don't have all the skills required" << std::endl;

    return 0;
}
