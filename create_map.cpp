srand(time(NULL)); 

    LayerSystem layerSystem(30, 30);

     const vector<string> layerNames = {"Animal", "Plant", "Land"};
    for (const auto& name : layerNames) {
        layerSystem.createNewLayer(name); 
    }
    

    
    set<pair<int, int>> usedPositions;

    int lionsCreated = 0;
    while (lionsCreated < 20) {
        int x = rand() % gridSize; 
        int y = rand() % gridSize; 

        if (usedPositions.find({x, y}) == usedPositions.end()) {
            Lion* lion = new Lion();

            layerSystem.getLayer("Animal")->addObject(lion, x, y);

            usedPositions.insert({x, y});

            lionsCreated++;
        }
    }
