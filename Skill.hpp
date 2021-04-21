#ifndef CS202_GROUP_PROJECT_SKILL_HPP
#define CS202_GROUP_PROJECT_SKILL_HPP
#include <iostream>

//A skills base class
class Skill {

public:
    virtual std::string className() const { return ""; }
    bool isKnown();
    bool isDisabled();
    void setKnown(bool setTo);
    void setDisabled(bool setTo);

protected:
    bool _isKnown = false;
    bool _isDisabled = false;

};
//A example how how we could use polymorphism to create more skills
class Alchemy: public Skill{
public:
    std::string skillName() const { return "Alchemy"; }
    static std::string description;
};
class Arcana: public Skill{
public:
    std::string skillName() const { return "Arcana"; }
    static std::string description;
};
class Archery: public Skill{
public:
    std::string skillName() const { return "Archery"; }
    static std::string description;
};
class Brawling: public Skill{
public:
    std::string skillName() const { return "Brawling"; }
    static std::string description;
};
class Dueling: public Skill{
public:
    std::string skillName() const { return "Dueling"; }
    static std::string description;
};
class Military: public Skill{
public:
    std::string skillName() const { return "Military"; }
    static std::string description;
};
class Agility: public Skill{
public:
    std::string skillName() const { return "Agility"; }
    static std::string description;
};
class Athletics: public Skill{
public:
    std::string skillName() const { return "Athletics"; }
    static std::string description;
};
class Endurance: public Skill{
public:
    std::string skillName() const { return "Endurance"; }
    static std::string description;

};
class Stealth: public Skill{
public:
    std::string skillName() const { return "Stealth"; }
    static std::string description;
};
class Awareness: public Skill{
public:
    std::string skillName() const { return "Awareness"; }
    static std::string description;
};
class History: public Skill{
public:
    std::string skillName() const { return "History"; }
    static std::string description;
};
class Reasoning: public Skill{
public:
    std::string skillName() const { return "Reasoning"; }
    static std::string description;
};
class Survival: public Skill{
public:
    std::string skillName() const { return "Survival"; }
    static std::string description;
};
class Willpower: public Skill{
public:
    std::string skillName() const { return "Willpower"; }
    static std::string description;
};
class Deception: public Skill{
public:
    std::string skillName() const { return "Deception"; }
    static std::string description;
};
class Empathy: public Skill{
public:
    std::string skillName() const { return "Empathy"; }
    static std::string description;
};
class Persuasion: public Skill{
public:
    std::string skillName() const { return "Persuasion"; }
    static std::string description;
};
class Streetwise: public Skill{
public:
    std::string skillName() const { return "Streetwise"; }
    static std::string description;
};
class Craftsmanship: public Skill{
public:
    std::string skillName() const { return "Craftsmanship"; }
    static std::string description;
};
class Devotion: public Skill{
public:
    std::string skillName() const { return "Devotion"; }
    static std::string description;
};
class Performance: public Skill{
public:
    std::string skillName() const { return "Performance"; }
    static std::string description;
};
class Runes: public Skill{
public:
    std::string skillName() const { return "Runes"; }
    static std::string description;
};
class Thievery: public Skill{
public:
    std::string skillName() const { return "Thievery"; }
    static std::string description;
};

#endif //CS202_GROUP_PROJECT_SKILL_HPP
