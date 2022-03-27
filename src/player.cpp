#include "player.h"

Player::Player() {

}
void Player::update(){
    if (Input::KeyDown(SDL_SCANCODE_LEFT)) {
        velocity.y = 0;
        velocity.x = -speed;
    }
    else if (Input::KeyDown(SDL_SCANCODE_UP)) {
        velocity.y = speed;
        velocity.x = 0;
    }
    else if (Input::KeyDown(SDL_SCANCODE_DOWN)) {
        velocity.y = -speed;
        velocity.x = 0;
    }
    else if (Input::KeyDown(SDL_SCANCODE_RIGHT)) {
        velocity.y = 0;
        velocity.x = speed;
    }
    render();
    update_position();
}

