#include "Fund.h"
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
