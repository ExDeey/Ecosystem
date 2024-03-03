
#include "Affliction.h"
using namespace std;

#ifndef AFFLICTIONS_H
#define AFFLICTIONS_H

class Move : public Affliction {
public:
    Move(GameObject *target);
    bool update() override;
};



class DecreaseAtk : public Affliction {
protected:
    int valueDecrease;
    int duration;
    bool applied; 
    bool permanent = false; 

public:
    DecreaseAtk(GameObject *target, int duration, int valueDecrease);
    bool virtual tick() override;
};


//evasion = chance to dodge attack when subject isnt going to fight (is going to flee)
//10% evasiveness = 1/10 chance to ignore attack
//possible stat if u want to add

class DecreaseEvasion : public Affliction {
protected:
    int valueDecrease;
    int duration;
    bool applied; 
    bool permanent = false; 

public:
    DecreaseEvasion(GameObject *target, int duration, int valueDecrease);
    bool virtual tick() override;
};

class IncreaseEvasion : public Affliction {
protected:
    int valueDecrease;
    int duration;
    bool applied; 
    bool permanent = false; 

public:
    IncreaseEvasion(GameObject *target, int duration, int valueDecrease);
    bool virtual tick() override;
};


#endif
