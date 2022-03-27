#include <map>
#include <SDL2/SDL.h>
#include <vector>

class Tilemap{
private:
    void load_textures();


public:
    std::vector<std::vector<int>> tile_array;
    Tilemap(int x,int y);

    enum class Tiles {
        Dirt,
        Stone,
        Grass,
        Cobblestone,
    };
    std::map<int,SDL_Texture*>


};