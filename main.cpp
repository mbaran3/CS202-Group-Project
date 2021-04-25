#include <iostream>
#include "PC.h"
#include "Race.hpp"
#include "Character_Class.h"
#include "Character_Creation.h"

int main() {

    //Character creation example
    PC example;
    Character_Creation(example);

    //Creates a PC
   
    std::cout << "\nYour Class is " << example.getClass() << " and Race " << example.getRace();
    std::cout << std::endl;



    return 0;
}
