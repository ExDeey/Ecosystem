#include "living_thing.h"



Animal::Animal(Layer *parent, int x, int)
        : LivingThing(parent, x, y){
               }



Plant::Plant(Layer *parent, int x, int )
        : LivingThing(parent, x, y){
        
        }



Lion::Lion(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 100;
    Hunger = 50;
    Stamina =50;
    Atk = 40;
    Def = 10;
    Sight = 3;
    Speed = 10;
    Defence_Aff* defenceAffliction = new Defence_Aff(this, 10, 5, -20, false);
    addAffliction(new defenceAffliction());
    // this->addAffliction(new Aff_Attack());

    //check plz idk bruh
    this->addAffliction(new Aff_Speed());
    this->addAbility(new sleep());
    this->addAbility(new die());
    }




// void Lion::initializeAfflictions() {
//         //Affliction* aff_effect = new HungerAffliction();
//         this->addAffliction(new Aff_Attack());
//         this->addAffliction(new Aff_Speed());
//     }

// void Lion::initializeAbilities() {
//         this->addAbility(new sleep());
//         this->addAbility(new die());
//     }
