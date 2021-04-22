
#include"PC.h"
#include"Race.h"
#include"Character_Class.h"
#include"Skill.hpp"
#include<iostream>
#include<string>

using std::endl;
using std::string;
using std::cout;
using std::cin;



//function used to initiate character creation 

void Character_Creation(PC& pc) {
    int menu_choice;

    //intro sequence. 
    cout << "Legacy Of Dragonholt" << '\n';
    cout << "Press Enter to begin " << '\n';

    while (cin.get() != '\n');


    cout << "Hello, and welcome to Legacy of Dragonholt, and the world of Terrinorth!" << '\n';
    cout << "In Legacy of Dragonholt, you will take control of a hero of your creation " << '\n';
    cout << "and set out to complete Epic Quest for fame and glory! " << '\n';

    while (cin.get() != '\n');


    cout << "Before you jump into your frst adventure, you will need to" << '\n';
    cout << "create a character, an avatar that will represent you in the" << '\n';
    cout << "Runebound World" << endl;

    while (cin.get() != '\n');


    cout << "Your character (also called a hero) is a combination of mechanical statistics" << '\n';
    cout << "and your imagination" << '\n';

    while (cin.get() != '\n');

    cout << "Your Character is based on 3 aspects" << '\n';
    cout << "Your characters' Race, a class, and a set of skills " << endl;

    while (cin.get() != '\n');

    cout << "The stories in this game take place in the realm of Terrinorth." << '\n';
    cout << "Terrinorth is predominantly settled by 'HUMANS', though 'ORCS' are also common" << '\n';
    cout << "through out the free citites and the wilderness between them. Terrinorth is crowned in the north" << '\n';
    cout << "by the great Dunwarr Mountains, the ancestral home of the 'DWARVES'. " << '\n';
    cout << "The Emerald boughs of the Aymhelin shelter the settlements of the Latari 'ELVES' and define " << '\n';
    cout << "Although less common, some 'GNOME' communties and 'CATFOLK' tribes also call Terrinorth their home"
        << endl;

    while (cin.get() != '\n');

    cout << "Choosing your race is an important first step, as this decision contributes " << '\n';
    cout << "To your identity, by establishing your general apperance, and your natrual talents " << '\n';

    while (cin.get() != '\n');

    cout << "Select a Race: " << endl;

    //swtich statement to assing race to player character

    cout << " 1) Human " << endl;
    cout << " 2) Orc " << endl;
    cout << " 3) Dwarf " << endl;
    cout << " 4) Elf " << endl;
    cout << " 5) Gnome " << endl;
    cout << " 6) Catfolk " << endl;


    bool menu_continue = false;
    do {
        cin >> menu_choice;
        switch (menu_choice) {
        case 1:
            pc.setRace(std::make_unique<Human>());
            menu_continue = true;
            break;
        case 2:
            pc.setRace(std::make_unique<Orcs>());
            menu_continue = true;
            break;
        case 3:
            pc.setRace(std::make_unique<Dwarf>());
            menu_continue = true;
            break;
        case 4:
            pc.setRace(std::make_unique<Elf>());
            menu_continue = true;
            break;
        case 5:
            pc.setRace(std::make_unique<Gnome>());
            menu_continue = true;
            break;
        case 6:
            pc.setRace(std::make_unique<Catfolk>());
            menu_continue = true;
            break;
        default:
            cout << "Invalid option, please enter a number (1 - 6)" << endl;


        }

    } while (menu_continue != true);

    menu_continue = false;

    cout << "Next you will choose your Class" << '\n';
    cout << "Your class broadly describes your training, talents, and the tatics" << '\n';
    cout << "You are most likely to use when exploring a dungeon, fighting monsters, or negotiating in town" << '\n';
    while (cin.get() != '\n');

    cout << "Select a Class: " << endl;
    //switch statement to assing class to player character

    cout << " 1) Apothecary " << endl;
    cout << " 2) Bard " << endl;
    cout << " 3) Brawler " << endl;
    cout << " 4) Knight " << endl;
    cout << " 5) Sage " << endl;
    cout << " 6) Thief" << endl;
    cout << " 7) Wildlander " << endl;

    do {
        cin >> menu_choice;
        switch (menu_choice) {
        case 1:
            pc.setClass(std::make_unique<Apothecary>());
            menu_continue = true;
            break;
        case 2:
            pc.setClass(std::make_unique<Bard>());
            menu_continue = true;
            break;
        case 3:
            pc.setClass(std::make_unique<Brawler>());
            menu_continue = true;
            break;
        case 4:
            pc.setClass(std::make_unique<Knight>());
            menu_continue = true;
            break;
        case 5:
            pc.setClass(std::make_unique<Sage>());
            menu_continue = true;
            break;
        case 6:
            pc.setClass(std::make_unique<Thief>());
            menu_continue = true;
            break;
        case 7:
            pc.setClass(std::make_unique<Wildlander>());
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice, please enter in a number (1 - 7)" << endl;
            break;

        }
    } while (menu_continue != true);

    pc.setSTM(14);
    menu_continue = false;

    //start of skill selections

    cout << "You will now select your skills for your character" << '\n';
    cout << "Skills represents your inherent talents and the traning you have recieved. " << '\n';
    cout << "Each skill corresponds to some set of tasks, and having a particular skill means that you excel" << '\n';
    cout << "With those tasks " << '\n';

    while (cin.get() != '\n');

    cout << "You will now select skills associated with your race " << '\n';
    cout << "Please select 2 of the skills presented to you " << '\n';

    int skill_choice_1;
    int skill_choice_2;

    //different if statments to set up skills associated with race
    if (pc.getRace() == "Human") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Deception  " << endl;
        cout << "2) Empathy " << endl;
        cout << "3) Persuasion " << endl;
        cout << "4) Streetwise " << endl;
        cout << "5) Military " << endl;
        cout << "6) Willpower " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.empathy.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.military.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.empathy.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.military.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }



    }

    if (pc.getRace() == "Orcs") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Athletics  " << endl;
        cout << "2) Endurance " << endl;
        cout << "3) Brawling " << endl;
        cout << "4) Dueling " << endl;
        cout << "5) Survival " << endl;
        cout << "6) Devotion " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.brawling.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.brawling.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }



    }

    if (pc.getRace() == "Dwarf") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Athletics  " << endl;
        cout << "2) Endurance " << endl;
        cout << "3) Willpower " << endl;
        cout << "4) Craftsmanship " << endl;
        cout << "5) History" << endl;
        cout << "6) Military " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.military.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.military.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }



    }

    if (pc.getRace() == "Elf") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Agility  " << endl;
        cout << "2) Archery " << endl;
        cout << "3) Dueling " << endl;
        cout << "4) Arcana " << endl;
        cout << "5) History " << endl;
        cout << "6) Devotion" << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.archery.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.arcana.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.archery.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.arcana.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }



    }

    if (pc.getRace() == "Gnome") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Alchemy  " << endl;
        cout << "2) Craftsmanship " << endl;
        cout << "3) Performance " << endl;
        cout << "4) Persuasion " << endl;
        cout << "5) Streetwise" << endl;
        cout << "6) stealth " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.alchemy.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.performance.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.alchemy.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.performance.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }



    }

    if (pc.getRace() == "Catfolk") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Agility  " << endl;
        cout << "2) Awarness" << endl;
        cout << "3) Survival " << endl;
        cout << "4) Athletics" << endl;
        cout << "5) Stealth " << endl;
        cout << "6) Brawling " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.awareness.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.brawling.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.awareness.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.brawling.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }


    }

    //different if statments to set up skills associated with each class
    if (pc.getClass() == "Apothecary") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Alchemy  " << endl;
        cout << "2) Craftsmanship " << endl;
        cout << "3) Persuasion " << endl;
        cout << "4) Reasoning " << endl;
        cout << "5) Survival " << endl;
        cout << "6) Arcana " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.alchemy.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.arcana.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.alchemy.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.arcana.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }



    }

    if (pc.getClass() == "Bard") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Performance  " << endl;
        cout << "2) Deception " << endl;
        cout << "3) Empathy " << endl;
        cout << "4) Persuasion " << endl;
        cout << "5) Streetwise " << endl;
        cout << "6) History " << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.performance.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.empathy.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.performance.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.empathy.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.persuasion.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }
    }

    if (pc.getClass() == "Brawler") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Brawling  " << endl;
        cout << "2) Athletics" << endl;
        cout << "3) Endurance " << endl;
        cout << "4) Dueling " << endl;
        cout << "5) Streetwise " << endl;
        cout << "6) Willpower" << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.brawling.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.brawling.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }
    }

    if (pc.getClass() == "Knight") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Military  " << endl;
        cout << "2) Athletics" << endl;
        cout << "3) Awareness" << endl;
        cout << "4) Dueling " << endl;
        cout << "5) Devotion " << endl;
        cout << "6) Willpower" << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.military.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.awareness.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.military.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.awareness.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.dueling.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.willpower.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;


        }
    }

    if (pc.getClass() == "Sage") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) History  " << endl;
        cout << "2) Arcana" << endl;
        cout << "3) Runes" << endl;
        cout << "4) Reasoning " << endl;
        cout << "5) Craftsmanship " << endl;
        cout << "6) Devotion" << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.arcana.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.runes.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.history.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.arcana.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.runes.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.craftsmanship.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.devotion.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;


        }
    }

    if (pc.getClass() == "Thief") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Deception " << endl;
        cout << "2) Reasoning" << endl;
        cout << "3) Agility" << endl;
        cout << "4) Stealth " << endl;
        cout << "5) Streetwise" << endl;
        cout << "6) Thievery" << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.thievery.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.thievery.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;


        }
    }

    if (pc.getClass() == "Wildlander") {

        cout << "Please select the first skill you would like to have \n from the following list " << endl;
        cout << "1) Archery " << endl;
        cout << "2) Survival" << endl;
        cout << "3) Endurance" << endl;
        cout << "4) Awarness " << endl;
        cout << "5) Stealth" << endl;
        cout << "6) Athletics" << endl;
        cin >> skill_choice_1;
        switch (skill_choice_1) {
        case 1:
            pc.archery.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.survival.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.endurance.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.awareness.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.athletics.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;



        }

        do {
            cout << "Select another skill " << endl;
            cin >> skill_choice_2;

            if (skill_choice_2 == skill_choice_2)
                cout << "Skill already chosen" << endl;
        } while (skill_choice_2 == skill_choice_1);

        switch (skill_choice_2) {
        case 1:
            pc.deception.setKnown(true);
            menu_continue = true;
            break;
        case 2:
            pc.reasoning.setKnown(true);
            menu_continue = true;
            break;
        case 3:
            pc.agility.setKnown(true);
            menu_continue = true;
            break;
        case 4:
            pc.stealth.setKnown(true);
            menu_continue = true;
            break;
        case 5:
            pc.streetwise.setKnown(true);
            menu_continue = true;
            break;
        case 6:
            pc.thievery.setKnown(true);
            menu_continue = true;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;


        }
    }
    }















