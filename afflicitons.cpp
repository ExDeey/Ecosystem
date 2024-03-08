#include "Affliction.h"

using namespace std;

Health_Aff::Health_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}
Health_Aff::Health_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}


Hunger_Aff::Hunger_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}
Hunger_Aff::Health_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}


Stamina_Aff::Stamina_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}
Stamina_Aff::Stamina_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}


Attack_Aff::Attack_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}
Attack_Aff::Attack_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}


Defence_Aff::Defence_Aff(StatusBlock *parent, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}
Defence_Aff::Defence_Aff(GameObject *target, int duration, int valueIncrease, int value, bool permanent) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value), permanent(permanent)
{}


Sight_Aff::Sight_Aff(StatusBlock *parent, int duration, int value, bool permanent) 
: Affliction(parent), duration(duration),value(value), permanent(permanent)
{}
Sight_Aff::Sight_Aff(GameObject *target, int duration, int value, bool permanent) 
: Affliction(target), duration(duration),value(value), permanent(permanent)
{}


Speed_Aff::Speed_Aff(StatusBlock *parent, int duration, int valueIncrease, int value) 
: Affliction(parent), duration(duration),valueIncrease(valueIncrease),value(value)
{}
Speed_Aff::Speed_Aff(GameObject *target, int duration, int valueIncrease, int value) 
: Affliction(target), duration(duration),valueIncrease(valueIncrease),value(value)
{}




