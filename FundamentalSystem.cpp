#include "FundametnalSystem.h"
#include <sstream> 
#include <string>
#include <vector>
using namespace std;



class LayerSystem {
private:
    //log ability vector
    vector<string> abilityUsageRecords;

public:

    void recordAbility(const string& record) {
        abilityUsageRecords.push_back(record);
    }

    const vector<string>& getAbilityUsageRecords() const {
        return abilityUsageRecords;
    }

    void clearAbilityUsageRecords() {
        abilityUsageRecords.clear();
    }
};




//////////////////////////////Return layer x y object property////////////////////////////////////////////////////////
class LayerSystem {
public:
    //std::vector<Layer*> layers;

    std::vector<std::string> collectInfoAtCoord(int x, int y) {

    std::vector<std::string> collectedInfo;

    for (Layer* layer : this->layers) { 
        GameObject* obj = layer->getObjectAt(x, y);
        if (obj != nullptr) {
            stringstream details;
            details << "Object Name: " << obj->getName();
            details << "Layer: " << layer->getName();
            details << ", Position: (" << x << ", " << y << ")";

            details << ", Abilities: ";
            for (Ability* ability : obj->getStat()->getAbilitySystem()->abilityGroup) {
                details << ability->getName() << ";\n";
            }

            details << ", Afflictions: ";
            for (Affliction* affliction : obj->getStat()->getAfflictionSystem()->afflictionGroup) {
                details << affliction->getName() << "; \n"; 
            }

            details << ", Stats: ";
            for (StatParam* stat : obj->getStat()->statParamGroup) {
                details << stat->getName() << ": " << stat->getValue() << "; \n"; 
            }

            collectedInfo.push_back(details.str());
        }
    }
        return collectedInfo;
    }
};


class GameObject {
public:

    //const vector<StatParam*>& getStats() const { return statParamGroup; }
    const AbilitySystem* getAbilitySystem() const { return abilitySystem; }
    const AfflictionSystem* getAfflictionSystem() const { return afflictionSystem; }
};

class Layer {
public:
    
    //vector<vector<GameObject*>> objects;

    GameObject* getObjectAt(int x, int y) {
        if (x >= 0 && x < objects.size() && y >= 0 && y < objects[x].size()) {
            return objects[x][y];
        }
        return nullptr;
    }

    std::string getName() const {
        // Return layer's name
    }
};












//change constructor of statparam default value -> value, add upperlimit
//able to 

// StatParam::StatParam(StatusBlock *parent, Ability *createBy, int defaultValue, int upperLimit)
//     : parent(parent), defaultValue(defaultValue), value(defaultValue), upperLimit(upperLimit) {
  
// }

// void StatParam::setUpperLimit(int newUpperLimit) {
//   this->upperLimit = newUpperLimit;
// }

// int StatParam::getUpperLimit() {
//   return this->upperLimit;
// }

// //check if value is okay 
// bool StatParam::changeValueBy(int i) {
//   int before = value;
//   value = std::min(value + i, upperLimit); // Ensure value does not exceed upper limit
//   value = std::max(value, 0); // Ensure value does not drop below 0
//   return isAction(before, value);
// }





// bool Affliction::tick()
// {
//   if (duration <= passedTime)
//   {
//     if (!permanant)
//     {
//       return false;
//     }
//   }
//   else
//   {
//     passedTime += 1;
//   }
//   value += valueIncrese;
//   return true;
// }





// void LayerSystem::addlog
