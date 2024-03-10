#include "living_thing.h"



Animal::Animal(Layer *parent, int x, int)
        : LivingThing(parent, x, y){
               }



Plant::Plant(Layer *parent, int x, int )
        : LivingThing(parent, x, y){
        
        }



Lion::Lion(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 160;
    Sight = 5;
    Speed = 5;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();
    new Attack_Aff(this, 0, 0, 50, true);
    new Stamina_Aff(this, 0, 0, 50, true);
    
    }

Bear::Bear(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 120;
    Sight = 5;
    Speed = 5;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();
    new Attack_Aff(this, 0, 0, 50, true);
    new Stamina_Aff(this, 0, 0, 50, true);
    
    }

Cheetah::Cheetah(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 80;
    Sight = 5;
    Speed = 7;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();
    new Attack_Aff(this, 0, 0, 30, true);
    new Stamina_Aff(this, 0, 0, 70, true);
    
    }

Giant_Snake::Giant_Snake(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 60;
    Sight = 5;
    Speed = 3;

    new PlayTurn();
    new Eat();
    new Rest();
    new Walk();
    new Mate();
    new Poison_Attack();
    new Attack_Aff(this, 0, 0, 20, true);
    new Stamina_Aff(this, 0, 0, 20, true);
    
    }

Rabbit::Rabbit(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 30;
    Sight = 2;
    Speed = 2;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();

    new Attack_Aff(this, 0, 0, 10, true);
    new Stamina_Aff(this, 0, 0, 10, true);
    
    }

Goat::Goat(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 40;

    Sight = 2;
    Speed = 2;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();

    new Attack_Aff(this, 0, 0, 10, true);
    new Stamina_Aff(this, 0, 0, 10, true);
    
    }

Deer::Deer(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 40;
    Sight = 2;
    Speed = 2;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();

    new Attack_Aff(this, 0, 0, 10, true);
    new Stamina_Aff(this, 0, 0, 10, true);
    
    }

Chicken::Chicken(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 20;
    Sight = 2;
    Speed = 2;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();

    new Attack_Aff(this, 0, 0, 10, true);
    new Stamina_Aff(this, 0, 0, 10, true);
    
    }

Poison_Frog::Poison_Frog(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 20;
   
    Sight = 2;
    Speed = 2;

    new PlayTurn();
    new Eat();
    new Rest();
    new Attack();
    new Walk();
    new Mate();
    new Poison_skin();
    new Attack_Aff(this, 0, 0, 10, true);
    new Stamina_Aff(this, 0, 0, 10, true);
    
    }


EarthWorm::EarthWorm(Layer *parent, int x, int y)
: Animal(parent, x, y){
    Health = 5;
    Sight = 2;
    Speed = 2;

    new PlayTurn();
    
    new Walk();
    
    }

Bush::Bush(Layer *parent, int x, int y)
: Plant(parent, x, y){
    Health = 5;

    new PlayTurn();
    new Spawn_fruit();
    new Walk();
    
    }

Apple_tree::Apple_tree(Layer *parent, int x, int y)
: Plant(parent, x, y){
    Health = 5;

    new PlayTurn();
    new Spawn_fruit();
    new Walk();
    
    }

Mushroom::Mushroom(Layer *parent, int x, int y)
: Plant(parent, x, y){
    Health = 5;

    new PlayTurn();
    new Walk();
    
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
