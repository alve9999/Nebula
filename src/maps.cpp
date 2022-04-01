#include "maps.h"

#include <random>

std::vector<std::vector<int>> load_map(int map_num) {
    std::vector<std::vector<int>> map;
    if(map_num==0) {
        map = { { Air, Air, Air, Air, Air, Air, Air, Air, Air },
                { Air, Air, Air, Air, Air, Air, Air, Air, Air },
                { Air, Air, Dirt, Air, Air, Air, Air, Air, Air },
                { Air, Air, Air, Air, Air, Air, Air, Air, Air },
                { Air, Air, Air, Air, Air, Air, Air, Air, Air},
                { Air, Air, Air, Air, Air, Air, Air, Air, Air },
                { Air, Air, Air, Air, Air, Air, Air, Air, Air },
                { Air, Air, Air, Air, Air, Air, Air, Air, Air },
                { Air, Air, Air, Air, Air, Air, Air, Air, Air } };
    }
    else if(map_num==1) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(0, 2);
        for(int i = 0;i<64;i++){
            std::vector<int> temp_map;
            for(int j = 0;j<64;j++){
                temp_map.push_back(distr(gen));
            }
            map.push_back(temp_map);
        }
    }
    
    return map;
}