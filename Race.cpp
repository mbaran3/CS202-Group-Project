#include "Race.hpp"

void Human::requiredSkill(PC &player){
    
    int counter = 0;
    if(player.deception == true)
        counter++;
    if(player.empathy == true)
        counter++;
    if(player.persuasion == true)
        counter++;
    if(player.streetwise == true)
        counter++;
    if(player.military == true)
        counter++;
    if(player.willpower == true)
        counter++;
    if(counter <= 2)
        return true;
    else 
        return false;

}
void Orcs::requiredSkill(PC &player){
    
    int counter = 0;
    if(player.athletics == true)
        counter++;
    if(player.endurance == true)
        counter++;
    if(player.brawling == true)
        counter++;
    if(player.dueling == true)
        counter++;
    if(player.survival == true)
        counter++;
    if(player.devotion == true)
        counter++;
    if(counter <= 2)
        return true;
    else 
        return false;

}
void Dwarf::requiredSkill(PC &player){
    
    int counter = 0;
    if(player.atheltics == true)
        counter++;
    if(player.endurance == true)
        counter++;
    if(player.willpower == true)
        counter++;
    if(player.craftsmanship== true)
        counter++;
    if(player.history == true)
        counter++;
    if(player.military == true)
        counter++;
    if(counter <= 2)
        return true;
    else 
        return false;

}
void Elves::requiredSkill(PC &player){
    
    int counter = 0;
    if(player.agility == true)
        counter++;
    if(player.archery == true)
        counter++;
    if(player.dueling == true)
        counter++;
    if(player.arcana == true)
        counter++;
    if(player.history == true)
        counter++;
    if(player.devotion == true)
        counter++;
    if(counter <= 2)
        return true;
    else 
        return false;

}
void Gnome::requiredSkill(PC &player){
    
    int counter = 0;
    if(player.alchemy == true)
        counter++;
    if(player.craftsmanship == true)
        counter++;
    if(player.performance == true)
        counter++;
    if(player.persuasion == true)
        counter++;
    if(player.streetwise == true)
        counter++;
    if(player.stealth == true)
        counter++;
    if(counter <= 2)
        return true;
    else 
        return false;

}
void Catfolk::requiredSkill(PC &player){
    
    int counter = 0;
    if(player.agility == true)
        counter++;
    if(player.awareness == true)
        counter++;
    if(player.survival == true)
        counter++;
    if(player.athletics == true)
        counter++;
    if(player.stealth == true)
        counter++;
    if(player.brawling == true)
        counter++;
    if(counter <= 2)
        return true;
    else 
        return false;

}









