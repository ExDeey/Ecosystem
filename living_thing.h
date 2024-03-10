#include "FundamentalSystem.h"

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

class Corpse : public GameObject {

protected:
    int Hunger_yield;
    string size, previous_type;
    string Type = "Corpse";

public:
    Corpse(Layer *parent, int x, int y, string previous_type, string size);
    
    virtual void update() override {
        GameObject::update(); 
    };
    

};

class Lion : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Lion";
    string diet_type = "Carnivore";
    string size = "Big";
public:
    Lion(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };

    
};

class Bear : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Bear";
    string diet_type = "Carnivore";
    string size = "Big";
public:
    Bear(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class Cheetah : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Cheetah";
    string diet_type = "Carnivore";
    string size = "Big";
public:
    Cheetah(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class Giant_Snake : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Giant Snake";
    string diet_type = "Carnivore";
    string size = "Big";
public:
    Giant_Snake(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };

    
};

class Rabbit : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Rabbit";
    string diet_type = "Herbivore";
    string size = "Medium";
public:
    Rabbit(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};


class Goat : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Goat";
    string diet_type = "Herbivore";
    string size = "Medium";
public:
    Rabbit(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};


class Deer : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Deer";
    string diet_type = "Herbivore";
    string size = "Medium";
public:
    Deer(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class Chicken : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Chicken";
    string diet_type = "Omnivore";
    string size = "Medium";
public:
    Chicken(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class Poison_Frog : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "Poison Frog";
    string diet_type = "Omnivore";
    string size = "Medium";
public:
    Poison_Frog(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class EarthWorm : public Animal {
protected:
    int Health, Hunger, Stamina, Atk, Def, Sight, Speed;
    string name = "EarthWorm";
    string diet_type = "Special";
    string size = "Small";
public:
    EarthWorm(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};


class Bush : public Plant {
protected:
    int Health, fruits, hunger_yield;
    string name = "Bush";
    
public:
    Bush(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class Apple_tree : public Plant {
protected:
    int Health, fruits, hunger_yield;
    string name = "Apple tree";
    
public:
    Apple_tree(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};

class Mushroom : public Plant {
protected:
    int Health,hunger_yield;
    string name = "Mushroom";
    
public:
    Mushroom(Layer *parent, int x, int y);
    virtual void update() override {
        GameObject::update(); 
    };
};



















#endif
//
