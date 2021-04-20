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

protected:
    bool _isKnown = false;
    bool _isDisabled = false;

};
//A example how how we could use polymorphism to create more skills
class Alchemy: public Skill{
public:
    static std::string description;
};
class Arcana: public Skill{
public:
    static std::string description;
};
class Archery: public Skill{
public:
    static std::string description;
};
class Brawling: public Skill{
public:
    static std::string description;
};
class Dueling: public Skill{
public:
    static std::string description;
};
class Military: public Skill{
public:
    static std::string description;
};
class Agility: public Skill{
public:
    static std::string description;
};
class Athletics: public Skill{
public:
    static std::string description;
};
class Endurance: public Skill{
public:
    static std::string description;

};
class Stealth: public Skill{
public:
    static std::string description;
};
class Awareness: public Skill{
public:
    static std::string description;
};
class History: public Skill{
public:
    static std::string description;
};
class Reasoning: public Skill{
public:
    static std::string description;
};
class Survival: public Skill{
public:
    static std::string description;
};
class Willpower: public Skill{
public:
    static std::string description;
};
class Deception: public Skill{
public:
    static std::string description;
};
class Empathy: public Skill{
public:
    static std::string description;
};
class Persuasion: public Skill{
public:
    static std::string description;
};
class Streetwise: public Skill{
public:
    static std::string description;
};
class Craftsmanship: public Skill{
public:
    static std::string description;
};
class Devotion: public Skill{
public:
    static std::string description;
};
class Performance: public Skill{
public:
    static std::string description;
};
class Runes: public Skill{
public:
    static std::string description;
};
class Thievery: public Skill{
public:
    static std::string description;
};

#endif //CS202_GROUP_PROJECT_SKILL_HPP
