
#include "Affliction.h"
#include <vector>
#include <memory>
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





class Poison : public Affliction {
protected:
    std::vector<std::unique_ptr<Affliction>> afflictions; // Container for other afflictions
    int duration;

public:
    Poison(GameObject *target, int duration, std::vector<Affliction*>& poisonEffectsVector);
    void addAffliction(Affliction* affliction);
    void addAllAff(vector<Affliction> poisonEffectsVector);

    bool virtual tick() override;
};

#endif
