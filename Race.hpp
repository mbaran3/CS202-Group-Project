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
    std::string _description;
};


//All races in game
class Human : public Race {
public:
    std::string raceName() override {return "Human";}
    bool requiredSkill(PC& player) const override;
    static std::string description;

};

class Orcs : public Race {
public:
    std::string raceName() override {return "Orcs";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Dwarf : public Race {
public:
    std::string raceName() override {return "Dwarf";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Elf : public Race {
public:
    std::string raceName() override {return "Elf";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Gnome : public Race {
public:
    std::string raceName() override {return "Gnome";}
    bool requiredSkill(PC& player) const override;
    static std::string description;
};

class Catfolk : public Race {
public:
    std::string raceName() override {return "Catfolk";}
    bool requiredSkill(PC& player) const override;
    static std::string description;

};




#endif //CS202_GROUP_PROJECT_RACE_HPP
