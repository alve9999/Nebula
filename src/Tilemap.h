#include <map>
#include <SDL2/SDL.h>
#include <vector>

class Tilemap{
private:
    void load_textures();


public:
    std::vector<std::vector<int>> tile_array;
    Tilemap(int x,int y);

    enum Tiles{
        dirt = 0,
        stone = 1,
        grass = 2,
        cobblestone = 3
    };
    std::map<int,SDL_Texture*>


};