#include <cstdint>
#include <SDL2/SDL.h>
#include "Input.h"


glm::ivec2 Input::mouse_pos = glm::ivec2(0,0);
const uint8_t* Input::state = SDL_GetKeyboardState(NULL);
const uint8_t* Input::prev_state = SDL_GetKeyboardState(NULL);
uint32_t Input::buttons = 0;
uint32_t Input::prev_buttons = 0;

void Input::update()
{
    prev_state = state;
    prev_buttons = buttons;
    state = SDL_GetKeyboardState(NULL);
    buttons = SDL_GetMouseState(&mouse_pos.x, &mouse_pos.y);
}

bool Input::key_down(int key)
{
    return state[key];
}

bool Input::key_up(int key)
{
    return !state[key];
}

bool Input::key_pressed(int key)
{
    return !prev_state[key] && state[key];
}

bool Input::key_released(int key)
{
    return prev_state[key] && !state[key];
}

bool Input::mouse_down(int button)
{
    return buttons && button;
}

bool Input::mouse_up(int button)
{
    return buttons && !button;
}

bool Input::mouse_pressed(int button)
{
    return (prev_buttons && !button) && (prev_buttons && button);
}

bool Input::mouse_released(int button)
{
    return (prev_buttons && button) && (prev_buttons && !button);
}
