#include "Affliction.h"

using namespace std;

Health_Aff::Health_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Health_Aff::Health_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}


Hunger_Aff::Hunger_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Hunger_Aff::Health_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}


Stamina_Aff::Stamina_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Stamina_Aff::Stamina_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}


Attack_Aff::Attack_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Attack_Aff::Attack_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}


Defence_Aff::Defence_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Defence_Aff::Defence_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}


Sight_Aff::Sight_Aff(StatusBlock *parent, int duration, int value) 
: Affliction(parent), duration(duration),value(value)
{}
Sight_Aff::Sight_Aff(GameObject *target, int duration, int value) 
: Affliction(target), duration(duration),value(value)
{}


Speed_Aff::Speed_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Speed_Aff::Speed_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}





