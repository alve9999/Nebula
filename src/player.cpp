#include "player.h"

Player::Player() {

}
void Player::update(){
    if (Input::KeyDown(SDL_SCANCODE_LEFT)) {
        update_velocity(-speed, 0);
    }
    else if (Input::KeyDown(SDL_SCANCODE_UP)) {
        update_velocity(0,-speed);
    }
    else if (Input::KeyDown(SDL_SCANCODE_DOWN)) {
        update_velocity(0,speed);
    }
    else if (Input::KeyDown(SDL_SCANCODE_RIGHT)) {
        update_velocity(speed, 0);
    }
    render();
    update_position();
}

