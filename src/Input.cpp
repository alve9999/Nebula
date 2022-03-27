#include <cstdint>
#include <SDL2/SDL.h>
#include "Input.h"


glm::ivec2 Input::mouse_pos = glm::ivec2(0,0);
const uint8_t* Input::state = SDL_GetKeyboardState(NULL);
const uint8_t* Input::prev_state = SDL_GetKeyboardState(NULL);
uint32_t Input::buttons = 0;
uint32_t Input::prev_buttons = 0;

void Input::Update()
{
    prev_state = state;
    prev_buttons = buttons;
    state = SDL_GetKeyboardState(NULL);
    buttons = SDL_GetMouseState(&mouse_pos.x, &mouse_pos.y);
}

bool Input::KeyDown(int key)
{
    return state[key];
}

bool Input::KeyUp(int key)
{
    return !state[key];
}

bool Input::KeyPressed(int key)
{
    return !prev_state[key] && state[key];
}

bool Input::KeyReleased(int key)
{
    return prev_state[key] && !state[key];
}

bool Input::MouseDown(int button)
{
    return buttons && button;
}

bool Input::MouseUp(int button)
{
    return buttons && !button;
}

bool Input::MousePressed(int button)
{
    return (prev_buttons && !button) && (prev_buttons && button);
}

bool Input::MouseReleased(int button)
{
    return (prev_buttons && button) && (prev_buttons && !button);
}
