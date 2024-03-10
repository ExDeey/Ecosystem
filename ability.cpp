 #include <sstream> 
 


//add to all Ability::active
    GameObject* parentObject = getParent()->getParent();
    
    std::stringstream recordDetails;
    recordDetails << parentObject->getName() << ", " 
                  << parentObject->getCoord().first << "," << parentObject->getCoord().second << ", " 
                  << this->getName();
    layerSystem->recordAbility(recordDetails);





