cmake_minimum_required(VERSION 3.17)
project(CS202_Group_Project)

set(CMAKE_CXX_STANDARD 14)


add_executable(CS202_Group_Project main.cpp  "PC.h" "PC.cpp" "Skill.cpp"
        "Skill.hpp" "Character_Creation.cpp" "Character_Creastion.h" "Character_Class.h"
        Character_Class.cpp SkillDescription.cpp CharacterClassDescriptions.cpp Race.cpp Race.hpp)
