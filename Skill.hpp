//
// Created by micha on 4/9/2021.
//

#ifndef CS202_GROUP_PROJECT_SKILL_HPP
#define CS202_GROUP_PROJECT_SKILL_HPP
#include <iostream>

//A skills base class
class Skill {

public:
    bool isKnown();
    bool isDisabled();
    void setKnown(bool setTo);
    void setDisabled(bool setTo);
    void printDescription();

protected:
    bool _isKnown = false;
    bool _isDisabled = false;
private:
   std::string _description;
};
class Alchemy: public Skill{

private:
    std::string _description = "Alchemy is Cool";
};


#endif //CS202_GROUP_PROJECT_SKILL_HPP
