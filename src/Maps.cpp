#include "Maps.h"

std::vector<std::vector<int>> load_map(int map_num){
    std::vector<std::vector<int>> map;
    if(map_num==0){
        map = {{(int)Tiles::Dirt,(int)Tiles::Cobblestone},
              {(int)Tiles::Dirt,(int)Tiles::Cobblestone},
              {(int)Tiles::Dirt,(int)Tiles::Cobblestone}};
    }
    
    return map;
}