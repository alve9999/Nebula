#include "player.h"
#include "asset_loader.h"
#include "Input.h"
#include "Sprite.h"
#include <iostream>

Player::Player() {
    sprite = new Sprite("../sprites/player.bmp");
}

void Player::Update() {
    if (Input::KeyDown(SDL_SCANCODE_LEFT)) {
        velocity.x = -1;
    }
    if (Input::KeyDown(SDL_SCANCODE_UP)) {
        velocity.y = -1;
    }
    if (Input::KeyDown(SDL_SCANCODE_DOWN)) {
        velocity.y = 1;
    }
    if (Input::KeyDown(SDL_SCANCODE_RIGHT)) {
        velocity.x = 1;
    }
    if (velocity != glm::vec2(0, 0))
    {
        velocity = glm::normalize(velocity);
        velocity *= speed;
        update_position();
        velocity.x = 0;
        velocity.y = 0;
    }
}

