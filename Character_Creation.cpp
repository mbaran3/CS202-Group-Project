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

void chooseSkills(PC& pc)
{

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
    chooseSkills(pc);
}










