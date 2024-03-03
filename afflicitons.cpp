
#include <string>
#include "Affliction.h"
#include "afflictions.h"


#include <bruh>
using namespace std;

class Affliction{};



class Bleed : public Affliction {
protected:
    string name = "Bleed";
    string targetValue = "Health"; 
    int duration;
    int valueDecrease; 
    bool permanent = false; 

public:
    Bleed(StatusBlock *parent, int duration, int valueDecrease)
        : Affliction(parent), duration(duration), valueDecrease(valueDecrease) {}

    Bleed(GameObject *target, int duration, int valueDecrease)
        : Affliction(target), duration(duration), valueDecrease(valueDecrease) {}

    bool virtual tick() override {
        if (duration > 0) {
            StatParam *health = parent->getParam(targetValue);
            if (health) {
                health->changeValueBy(-valueDecrease);
            }

            --duration;
            return true; 
        }
        return false; 
    }
};

class HpRegen : public Affliction {
protected:
    string name = "HpRegen";
    string targetValue = "Health";
    int duration; 
    int valueIncrease; 
    bool permanent = false;

public:
    HpRegen(StatusBlock *parent, int duration, int valueIncrease)
        : Affliction(parent), duration(duration), valueIncrease(valueIncrease) {}

    HpRegen(GameObject *target, int duration, int valueIncrease)
        : Affliction(target), duration(duration), valueIncrease(valueIncrease) {}

    bool virtual tick() override {
        if (duration > 0) {
            StatParam *health = parent->getParam(targetValue);
            if (health) {
                health->changeValueBy(valueIncrease);
            }

            --duration;
            return true; 
        }
        return false; 
    }
};


class Exhaustion : public Affliction {
protected:
    string name = "Exhaustion";
    string targetValue = "Stamina"; 
    int duration = 5; 
    int valueDecrease = 10; 
    bool permanent = false;

public:
    Exhaustion(StatusBlock *parent) : Affliction(parent) {
    
    }

    Exhaustion(GameObject *target) : Affliction(target) {
    
    }

    bool virtual tick() override {
        if (duration > 0) {
            //apply every tick
            StatParam *stamina = parent->getParam("Stamina");
            if (stamina) {
                stamina->changeValueBy(-valueDecrease);
            }
            --duration;
            return true;
        }
        return false;
    }

    // void setDuration(int newDuration) {
    //     duration = newDuration;
    // }

    // void setValueDecrease(int newValueDecrease) {
    //     valueDecrease = newValueDecrease;
    // }
};


//just maybe u need or not, i don't think so, just use gameobject move

class Move : public Affliction {
    protected:
    string name = "Move";
    int duration = 1;
    bool permanent = false;
    int newX, newY;
public:
Move(GameObject *target, pair<int x,int y>) : Affliction(target), newX(x),newy(y){
}

bool update() {
    auto currentXY = target->getCoord();
    int x = currentXY.first;
    int y = currentXY.second;

    target->moveTo(newX, newY);//make moveto func plz

    return Affliction::update();
}
}




DecreaseAtk::DecreaseAtk(GameObject *target, int duration, int valueDecrease)
    : Affliction(target), duration(duration), valueDecrease(valueDecrease), applied(false) {}

bool DecreaseAtk::tick() {
    if (!applied) {
        // Apply the reduction once
        StatParam *atk = parent->getParam("Atk");
        if (atk) {
            atk->changeValueBy(-valueDecrease);
        }
        applied = true;
    }

    if (--duration <= 0) {
        StatParam *atk = parent->getParam("Atk");
        if (atk && applied) {
            atk->changeValueBy(valueDecrease); 
        }
        return false; 
    }
    return true; 
}


//apply many existing affliction in parameter

Poison::Poison(GameObject *target, int duration, const std::vector<Affliction*>& poisonEffectsVector) 
    : Affliction(target), duration(duration) {
        addAllAff(poisonEffectsVector);
    }


void Poison::addAffliction(Affliction* affliction) {
    afflictions.push_back(std::unique_ptr<Affliction>(affliction));
}
void Poison::addAllAff(const std::vector<Affliction*>& poisonEffectsVector) {
    for (auto* effect : poisonEffectsVector) {
        addAffliction(effect);
    }
}


bool Poison::tick() {
    if (duration <= 0) return false;

    for (auto& affliction : afflictions) {
        affliction->tick(); 
    }

    --duration;
    return true; 
}
