#pragma once

#include <cstdint>
#include <SDL2/SDL.h>
#include <glm/glm.hpp>

class Input 
{
private:
    static const uint8_t* state;
    static const uint8_t* prev_state; 
    static uint32_t buttons;
    static uint32_t prev_buttons;

public:
    static void update(); 
    static bool key_down(int key);
    static bool key_up(int key);
    static bool key_pressed(int key);
    static bool key_released(int key);

    static bool mouse_down(int button);
    static bool mouse_up(int button);
    static bool mouse_pressed(int button);
    static bool mouse_released(int button);

    static glm::ivec2 mouse_pos;
};