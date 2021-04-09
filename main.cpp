#include <iostream>
#include "Skill.hpp"

int main() {

    Alchemy alchemy;
    alchemy.setKnown(true);
    if(alchemy.isKnown()){
        std::cout << "The Character knows Alchemy" << std::endl;
    }
    alchemy.setDisabled(false);
    if(alchemy.isKnown())
        std::cout << "The Character Alchemy is Disabled" << std::endl;


    return 0;
}
