#pragma once
#ifndef CS202_GROUP_PROJECT_RACE_HPP
#define CS202_GROUP_PROJECT_RACE_HPP
#include <string>
#include "PC.h"
class PC;


//base class for Race
class Race {
public:

    virtual std::string raceName() {return "No race set";}
    virtual bool requiredSkill(PC& player) const = 0;
    virtual std::string requirements() const = 0;
    std::string _description;
};


//All races in game
class Human : public Race {
public:
    std::string raceName() {return "Human";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
    std::string requirements() const override;

};

class Orcs : public Race {
public:
    std::string raceName() {return "Orcs";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
    std::string requirements() const override;
};

class Dwarf : public Race {
public:
    std::string raceName() {return "Dwarf";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
    std::string requirements() const override;
};

class Elf : public Race {
public:
    std::string raceName() {return "Elf";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
    std::string requirements() const override;
};

class Gnome : public Race {
public:
    std::string raceName() {return "Gnome";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
    std::string requirements() const override;
};

class Catfolk : public Race {
public:
    std::string raceName() {return "Catfolk";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
    std::string requirements() const override; 
};




#endif //CS202_GROUP_PROJECT_RACE_HPP