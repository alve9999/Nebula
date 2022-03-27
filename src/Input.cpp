#include <cstdint>
#include <SDL2/SDL.h>
#include "Input.h"

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
