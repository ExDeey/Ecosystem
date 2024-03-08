#include "Fund.h"

using namespace std;

#ifndef LIVING_THING_H
#define LIVINGTHING_H



// class LivingThing : public GameObject {
// public:
//     LivingThing(Layer *parent, int x, int y)
//         : GameObject(parent, x, y) {} 

//     virtual void update() override {
        
//     }

// };





class Animal : public GameObject {
protected:
    int x, y;
    int Health = 0; int Hunger = 0;int Stamina = 0;int Atk = 0;int Def = 0;int Sight = 0;int Speed = 0;
    string Type = "Animal";


public:
    Animal(Layer *parent, int x, int y);

    virtual void update() override {
        GameObject::update(); 
    };
    
};




class Plant : public GameObject {
    
protected:
    int Health = 0;int Atk = 0;int Def = 0;int Sight = 0;int Speed = 0;
    string Type = "Plant";

public:
    Plant(Layer *parent, int x, int y);
    
    virtual void update() override {
        GameObject::update(); 
    };
    

};

class Lion : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;

public:
    Lion(Layer *parent, int x, int y);
    

    virtual void update() override {
        GameObject::update(); 
    };

    
};







#endif
//
