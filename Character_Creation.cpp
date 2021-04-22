#include"PC.h"
#include"Character_Creation.h"
#include<iostream>
#include<string>
#include<stdlib.h>
using std::endl;
using std::string;
using std::cout;
using std::cin;

bool yesNo()
{
    while (true)
    {
        string enter;
        cout << "(type Y / N): " << endl;
        getline(cin, enter);
        if (enter == "Y") return true;
        else if (enter == "N") return false;
        else cout << "Please try again. \n" << endl;
    }

}

void chooseRace(PC& pc)
{
    int race_menu_choice;
    int repeat = 0;
    while (true)
    {
        system("CLS");
        if (repeat > 0) cout << "Please try again.\n"<< endl;
        cout << "Select a Race (enter the corresponding number): " << endl;
        //swtich statement to asking race to player character
        cout << " 1) Human " << endl;
        cout << " 2) Orcs " << endl;
        cout << " 3) Dwarf " << endl;
        cout << " 4) Elf " << endl;
        cout << " 5) Gnome " << endl;
        cout << " 6) Catfolk " << endl;
        string race;
        getline(cin, race);
        if (race.length() == 1 && race.front() > 48 && race.front() < 55)
        {
            race_menu_choice = race.front() - '0';
            break;
        }
        else repeat = 1;
    }
    
    switch (race_menu_choice) {
    case 1:
        cout << Human::description << endl;
        cout << "would you like to choose human? " << endl;
        if (yesNo()) pc.setRace(std::make_unique<Human>());
        else chooseRace(pc);
        break;
    case 2:
        cout << Orcs::description << endl;
        cout << "would you like to choose Orcs? " << endl;
        if (yesNo()) pc.setRace(std::make_unique<Orcs>());
        else chooseRace(pc);
        break;
    case 3:
        cout << Dwarf::description << endl;
        cout << "would you like to choose Dwarf? " << endl;
        if (yesNo()) pc.setRace(std::make_unique<Dwarf>());
        else chooseRace(pc);
        break;
    case 4:
        cout << Elf::description << endl;
        cout << "would you like to choose Elf? " << endl;
        if (yesNo()) pc.setRace(std::make_unique<Elf>());
        else chooseRace(pc);
        break;
    case 5:
        cout << Gnome::description << endl;
        cout << "would you like to choose Gnome? " << endl;
        if (yesNo()) pc.setRace(std::make_unique<Gnome>());
        else chooseRace(pc);
        break;
    case 6:
        cout << Catfolk::description << endl;
        cout << "would you like to choose Catfolk? " << endl;
        if (yesNo()) pc.setRace(std::make_unique<Catfolk>());
        else chooseRace(pc);
        break;

    }
}

void chooseClass(PC& pc)
{
    int class_menu_choice;
    int repeat = 0;
    while (true)
    {
        system("CLS");
        if (repeat > 0) cout << "Please try again. \n" << endl;
        cout << "Select a Class (enter the corresponding number): " << endl;
        //swtich statement to asking class to player character
        cout << " 1) Apothecary " << endl;
        cout << " 2) Bard " << endl;
        cout << " 3) Brawler " << endl;
        cout << " 4) Knight " << endl;
        cout << " 5) Sage " << endl;
        cout << " 6) Thief " << endl;
        cout << " 7) Wildlander " << endl;
        string pcClass;
        getline(cin, pcClass);
        if (pcClass.length() == 1 && pcClass.front() > 48 && pcClass.front() < 56)
        {
            class_menu_choice = pcClass.front() - '0';
            break;
        }
        else repeat = 1;
    }
    switch (class_menu_choice) {
    case 1:
        cout << Apothecary::description << endl;
        cout << "would you like to choose Apothecary? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Apothecary>());
        else chooseClass(pc);
        break;
    case 2:
        cout << Bard::description << endl;
        cout << "would you like to choose Bard? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Bard>());
        else chooseClass(pc);
        break;
    case 3:
        cout << Brawler::description << endl;
        cout << "would you like to choose Brawler? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Brawler>());
        else chooseClass(pc);
        break;
    case 4:
        cout << Knight::description << endl;
        cout << "would you like to choose Knight? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Knight>());
        else chooseClass(pc);
        break;
    case 5:
        cout << Sage::description << endl;
        cout << "would you like to choose Sage? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Sage>());
        else chooseClass(pc);
        break;
    case 6:
        cout << Thief::description << endl;
        cout << "would you like to choose Thief? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Thief>());
        else chooseClass(pc);
        break;
    case 7:
        cout << Wildlander::description << endl;
        cout << "would you like to choose Wildlander? " << endl;
        if (yesNo()) pc.setClass(std::make_unique<Wildlander>());
        else chooseClass(pc);
        break;
    }
}

void chooseSkills(PC& pc, int& num)
{
    system("CLS");   
    cout << "You must choose two skills from both your class and race specialties." << endl;
    cout << "Your Class: " << pc.getClass() << "/ Race: " << pc.getRace() << endl;
    //prints requirements/specialties of pc race and class
    cout << pc.charClass->requirements() << endl;
    cout << pc.race->requirements() << endl;

    cout << "\nThe list of skills available are: \n";
    cout << "Combat skills: Alchemy, Arcana, Archery, Brawling, Dueling, Military." << endl;
    cout << "Physical skills: Agility, Athletics, Endurance, Stealth." << endl;
    cout << "Mental skills: Awareness, History, Reasoning, Survival, Willpower." << endl;
    cout << "Social skills: Deception, Empathy, Persuasion, Streetwise." << endl;
    cout << "Craftmanship skills: Devotion, Performance, Runes, Thievery.\n" << endl;

    cout << "Type in a skill you want: ";
    string skill;
    getline(cin, skill);
    if (skill == "Alchemy")
    {
        cout << Alchemy::description << endl;
        if (pc.alchemy.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Alchemy? " << endl;
            if (yesNo())
            {
                pc.alchemy.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Arcana")
    {
        cout << Arcana::description << endl;
        if (pc.arcana.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Arcana? " << endl;
            if (yesNo())
            {
                pc.arcana.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Archery")
    {
        cout << Archery::description << endl; 
        if (pc.archery.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Archery? " << endl;
            if (yesNo())
            {
                pc.archery.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Brawling")
    {
        cout << Brawling::description << endl;
        if (pc.brawling.isKnown()) cout << "You already chose this skill!" << endl;
        else {
        cout << "would you like to choose Brawling? " << endl;
        if (yesNo())
        {
            pc.brawling.setKnown(true);
            num++;
        }
    }
    }
    else if (skill == "Dueling")
    {
        cout << Dueling::description << endl; 
        if (pc.dueling.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Dueling? " << endl;
            if (yesNo())
            {
                pc.dueling.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Military")
    {
        cout << Military::description << endl;
        if (pc.military.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Military? " << endl;
            if (yesNo())
            {
                pc.military.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Agility")
    {
        cout << Agility::description << endl; 
        if (pc.agility.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Agility? " << endl;
            if (yesNo())
            {
                pc.agility.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Athletics")
    {
        cout << Athletics::description << endl;
        if (pc.athletics.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Athletics? " << endl;
            if (yesNo())
            {
                pc.athletics.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Endurance")
    {
        cout << Endurance::description << endl;
        if (pc.endurance.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Endurance? " << endl;
            if (yesNo())
            {
                pc.endurance.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Stealth")
    {
        cout << Stealth::description << endl; 
        if (pc.stealth.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Stealth? " << endl;
            if (yesNo())
            {
                pc.stealth.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Awareness")
    {
        cout << Awareness::description << endl;
        if (pc.awareness.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Awareness? " << endl;
            if (yesNo())
            {
                pc.awareness.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "History")
    {
        cout << History::description << endl; 
        if (pc.history.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose History? " << endl;
            if (yesNo())
            {
                pc.history.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Reasoning")
    {
        cout << Reasoning::description << endl; 
        if (pc.reasoning.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Reasoning? " << endl;
            if (yesNo())
            {
                pc.reasoning.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Survival")
    {
        cout << Survival::description << endl; 
        if (pc.survival.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Survival? " << endl;
            if (yesNo())
            {
                pc.survival.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Willpower")
    {
        cout << Willpower::description << endl;
        if (pc.willpower.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Willpower? " << endl;
            if (yesNo())
            {
                pc.willpower.setKnown(true);
                num++;
            }
        }
    }   
    
    else if (skill == "Deception")
    {
        cout << Deception::description << endl; 
        if (pc.deception.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Deception? " << endl;
            if (yesNo())
            {
                pc.deception.setKnown(true);
                num++;
            }
        }
    }
    else if (skill == "Empathy")
    {
        cout << Empathy::description << endl; 
        if (pc.empathy.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Empathy? " << endl;
            if (yesNo())
            {
                pc.empathy.setKnown(true);
                num++;
            }
        }
    }   
    else if (skill == "Persuasion")
    {
        cout << Persuasion::description << endl; 
        if (pc.persuasion.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Persuasion? " << endl;
            if (yesNo())
            {
                pc.persuasion.setKnown(true);
                num++;
            }
        }
    }   
    else if (skill == "Streetwise")
    {
        cout << Streetwise::description << endl; 
        if (pc.streetwise.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Streetwise? " << endl;
            if (yesNo())
            {
                pc.streetwise.setKnown(true);
                num++;
            }
        }
    }   
    else if (skill == "Craftsmanship")
    {
        cout << Craftsmanship::description << endl; 
        if (pc.craftsmanship.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Craftsmanship? " << endl;
            if (yesNo())
            {
                pc.craftsmanship.setKnown(true);
                num++;
            }
        }
    }         
    else if (skill == "Devotion")
    {
        cout << Devotion::description << endl; 
        if (pc.devotion.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Devotion? " << endl;
            if (yesNo())
            {
                pc.devotion.setKnown(true);
                num++;
            }
        }
    }         
    else if (skill == "Performance")
    {
        cout << Performance::description << endl; 
        if (pc.performance.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Performance? " << endl;
            if (yesNo())
            {
                pc.performance.setKnown(true);
                num++;
            }
        }
    }         
    else if (skill == "Runes")
    {
        cout << Runes::description << endl; 
        if (pc.runes.isKnown()) cout << "You already chose this skill!" << endl; 
        else {
            cout << "would you like to choose Runes? " << endl;
            if (yesNo())
            {
                pc.runes.setKnown(true);
                num++;
            }
        }
    }         
    else if (skill == "Thievery")
    {
        cout << Thievery::description << endl;
        if (pc.thievery.isKnown()) cout << "You already chose this skill!" << endl;
        else {
            cout << "would you like to choose Thievery? " << endl;
            if (yesNo())
            {
                pc.thievery.setKnown(true);
                num++;
            }
        }
    }
    else cout << "That is not a valid skill name, try again." << endl;
    cout << endl;
    if (num < 5)
    {
        cout << "You only have " << num << " skills, you need at least 5!" << endl;
        while (cin.get() != '\n');
        chooseSkills(pc, num);
    }
    else if (num < 8)
    {
        cout << "Are you finished choosing skills?\n";
        cout << "You have " << num << " skills and " << 28 - num * 2 << " max stamina" << endl;
        if (yesNo())
        {
            if (pc.charClass->requiredSkill(pc) && pc.race->requiredSkill(pc)) return;
            else
            {
                cout << "You do not meet the required skill number for your class and race!" << endl;
                cout << "Please try again." << endl;
                pc.resetSkills();
                num = 0;
                while (cin.get() != '\n');
                chooseSkills(pc, num);
            }
        }
        else chooseSkills(pc, num);
    }
    else
    {
        if (pc.charClass->requiredSkill(pc) && pc.race->requiredSkill(pc))
        {
            cout << "You have the max amount of skills." << endl;
            cout << "You have " << num << " skills and " << 28 - num * 2 << " max stamina" << endl;
            cout << "Would you like to rechoose your skills?" << endl;
            if (yesNo())
            {
                pc.resetSkills();
                num = 0;
                while (cin.get() != '\n');
                chooseSkills(pc, num);
            }
            else return;
        }
        else
        {
            cout << "You do not meet the required skill number for your class and race!" << endl;
            cout << "Please try again." << endl;
            pc.resetSkills();
            num = 0;
            while (cin.get() != '\n');
            chooseSkills(pc, num);
        }
    }
}
//function used to initiate character creation 

void Character_Creation(PC& pc) {
    cout << "Before you jump into your frst adventure, you will need to\n";
    cout << "create a character an avatar that will represent you in the\n";
    cout << "Runebound World" << endl;

    while (cin.get() != '\n');


    cout << "Your character (also called a hero) is a combination of mechanical statistics\n";
    cout << "and your imagination\n";

    while (cin.get() != '\n');

    cout << "Your Character is based on 3 aspects\n";
    cout << "Your characters' Race, a class, and a set of skills " << endl;

    while (cin.get() != '\n');

    cout << "The stories in this game take place in the realm of Terrinorth.\n";
    cout << "Terrinorth is predominantly settled by 'HUMANS', though 'ORCS' are also common\n";
    cout << "through out the free citites and the wilderness between them. Terrinorth is crowned in the north\n";
    cout << "by the great Dunwarr Mountains, the ancestral home of the 'DWARVES'. \n";
    cout << "The Emerald boughs of the Aymhelin shelter the settlements of the Latari 'ELVES' and define \n";
    cout << "Although less common, some 'GNOME' communties and 'CATFOLK' tribes also call Terrinorth their home"
         << endl;

    while (cin.get() != '\n');

    cout << "Choosing your race is an important first step, as this decision contributes\n";
    cout << "To your identity, by establishing your general apperance, and your natrual talents\n" << endl;
    cout << "Continue to choose your race." << endl;
    while (cin.get() != '\n');

    chooseRace(pc);
    cout << "\nNext continue to choose your class." << endl;
    while (cin.get() != '\n');
    chooseClass(pc);
    cout << "\nNext for choosing your skills." << endl;
    while (cin.get() != '\n');

    system("CLS");
    cout << "You may select a total of 5 to 8 skills. " << endl;
    cout << "The more skills you choose the less maximum stamina you will have." << endl;
    cout << "Your maximum stamina with 5 skills is 18. " << endl;
    cout << "For each skill you choose beyond 5, your max stamina will be decreased by two, "<<endl;
    cout << "to a minimum of 12 stamina with 8 skills. " << endl;
    cout<<"When you run out of stamina you will collapse from exhaustion so choose carefully!\n" << endl;
    cout << "Also, at least two of your skills must be from your racial specialties, "<<endl;
    cout << "and two must be from your class specialties." <<endl;
    cout << "After that you may choose the rest freely. " << endl;
    cout << "\nContinue to choose your skills." << endl;
    while (cin.get() != '\n');
    int skillNum=0;
    chooseSkills(pc,skillNum);
    pc.setSTM(28 - skillNum * 2);
}










