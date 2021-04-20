#include "PC.h"



class Race{
public:
    virtual void raceSkill(PC &player);    

};
class Human : public Race{
    static std::string description;
};
class Orc : public Race{
    static std::string description;
};
class Dwarf: public Race{
    static std::string description;
};
class Elves: public Race{
    static std::string description;
};
class Gnomes: public Race{
    static std::string description;
};
class Catfolk: public Race{
    static std::string description;
}