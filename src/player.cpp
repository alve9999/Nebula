#include "player.h"
#include "asset_loading.h"

Player::Player() {
    texture = load_texture("../sprites/player.bmp");
}

void Player::update() {
    if (Input::KeyDown(SDL_SCANCODE_LEFT)) {
        velocity.y = 0;
        velocity.x = -speed;
    }
    else if (Input::KeyDown(SDL_SCANCODE_UP)) {
        velocity.y = -speed;
        velocity.x = 0;
    }
    else if (Input::KeyDown(SDL_SCANCODE_DOWN)) {
        velocity.y = speed;
        velocity.x = 0;
    }
    else if (Input::KeyDown(SDL_SCANCODE_RIGHT)) {
        velocity.y = 0;
        velocity.x = speed;
    }
    update_position();
}

