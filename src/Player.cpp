#include "player.h"
#include "asset_loader.h"
#include "Input.h"
#include "Sprite.h"
#include <iostream>

Player::Player() {
    sprite = new Sprite("../sprites/player.bmp");
    position = glm::vec2(0,0);
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
    velocity.x = 0;
    velocity.y = 0;
    std::cout << "Position: " << position.x << ", " << position.y << std::endl;
}

