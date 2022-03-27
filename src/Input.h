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
    static void Update(); 
    static bool KeyDown(int key);
    static bool KeyUp(int key);
    static bool KeyPressed(int key);
    static bool KeyReleased(int key);

    static bool MouseDown(int button);
    static bool MouseUp(int button);
    static bool MousePressed(int button);
    static bool MouseReleased(int button);

    static glm::ivec2 mouse_pos;
};