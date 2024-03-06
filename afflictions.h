#include "Fund.h"

using namespace std;

#ifndef ABILITY_CPP
#define ABILITY_CPP

//
class TurnEater : public Affliction {

};

class Health_Aff : public Affliction {
    protected:
    string name = "Health_Aff";
    string targetValue = "Health";
    int duration,valueIncrease,value;
    bool permanent = false;
    public:
    Health_Aff(StatusBlock *parent, int duration, int valueIncrease, int value);
    Health_Aff(GameObject *target, int duration, int valueIncrease, int value);
};

class Hunger_Aff : public Affliction {
    protected:
    string name = "Hunger_Aff";
    string targetValue = "Hunger";
    int duration,valueIncrease,value;
    bool permanent = false;
    public:
    Hunger_Aff(StatusBlock *parent, int duration, int valueIncrease, int value);
    Hunger_Aff(GameObject *target, int duration, int valueIncrease, int value);
};

class Stamina_Aff : public Affliction {
    protected:
    string name = "Stamina_Aff";
    string targetValue = "Stamina";
    int duration,valueIncrease,value;
    bool permanent = false;
    public:
    Stamina_Aff(StatusBlock *parent, int duration, int valueIncrease, int value);
    Stamina_Aff(GameObject *target, int duration, int valueIncrease, int value);
};


class Attack_Aff : public Affliction {
    protected:
    string name = "Attack_Aff";
    string targetValue = "Atk";
    int duration,valueIncrease,value;
    bool permanent = false;
    public:
    Attack_Aff(StatusBlock *parent, int duration, int valueIncrease, int value);
    Attack_Aff(GameObject *target, int duration, int valueIncrease, int value);
};


class Defence_Aff : public Affliction {
    protected:
    string name = "Defence_Aff";
    string targetValue = "Defence";
    int duration,valueIncrease,value;
    bool permanent = false;
    public:
    Defence_Aff(StatusBlock *parent, int duration, int valueIncrease, int value);
    Defence_Aff(GameObject *target, int duration, int valueIncrease, int value);
};

//sight shouldn't be incremented alot so remove valIncrease
class Sight_Aff : public Affliction {
    protected:
    string name = "Sight_Aff";
    string targetValue = "Sight";
    int duration,value;
    bool permanent = false;
    public:
    Sight_Aff(StatusBlock *parent, int duration, int value);
    Sight_Aff(GameObject *target, int duration, int value);
};


class Speed_Aff : public Affliction {
    protected:
    string name = "Speed_Aff";
    string targetValue = "Speed";
    int duration,valueIncrease,value;
    bool permanent = false;
    public:
    Speed_Aff(StatusBlock *parent, int duration, int valueIncrease, int value);
    Speed_Aff(GameObject *target, int duration, int valueIncrease, int value);
};





// class Hunger_Decrease : public Affliction {
//     protected:
//     string name = "Hunger_Decrease";
//     string targetValue = "Hunger";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = -5;
//     bool permanent = true;
//     public:
//     Hunger_Decrease(StatusBlock *parent);
//     Hunger_Decrease(GameObject *target);
// };

// class Hunger_Increase : public Affliction {
//     protected:
//     string name = "Hunger_Increase";
//     string targetValue = "Hunger";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = 5;
//     bool permanent = true;
//     public:
//     Hunger_Increase(StatusBlock *parent);
//     Hunger_Increase(GameObject *target);
// };

// class Const_Hunger_Increase : public Affliction {
//     protected:
//     string name = "Const_Hunger_Increase";
//     string targetValue = "Hunger";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Hunger_Increase(StatusBlock *parent);
//     Const_Hunger_Increase(GameObject *target);
// };

// class Const_Hunger_Decrease : public Affliction {
//     protected:
//     string name = "Const_Hunger_Decrease";
//     string targetValue = "Hunger";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Hunger_Decrease(StatusBlock *parent);
//     Const_Hunger_Decrease(GameObject *target);
// };


// class Health_Decrease : public Affliction {
//     protected:
//     string name = "Health_Decrease";
//     string targetValue = "Health";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = -10;
//     bool permanent = true;
//     public:
//     Health_Decrease(StatusBlock *parent);
//     Health_Decrease(GameObject *target);
// };

// class Health_Increase : public Affliction {
//     protected:
//     string name = "Health_Increase";
//     string targetValue = "Health";
//     int duration = 1;
//     int valueIncrease = 0;
//     int value = 10;
//     bool permanent = true;
//     public:
//     Health_Increase(StatusBlock *parent);
//     Health_Increase(GameObject *target);
// };

// class Const_Health_Increase : public Affliction {
//     protected:
//     string name = "Const_Health_Increase";
//     string targetValue = "Health";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Health_Increase(StatusBlock *parent);
//     Const_Health_Increase(GameObject *target);
// };

// class Const_Health_Decrease : public Affliction {
//     protected:
//     string name = "Const_Health_Decrease";
//     string targetValue = "Health";
//     int duration = 10;
//     int valueIncrease = 1;
//     int value = 0;
//     bool permanent = false;
//     public:
//     Const_Health_Decrease(StatusBlock *parent);
//     Const_Health_Decrease(GameObject *target);
// };






#endif
