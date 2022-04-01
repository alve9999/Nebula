#include "player.h"
#include "asset_loader.h"
#include "Input.h"
#include "Sprite.h"
#include <iostream>

Player::Player(int width, int height) : Entity(width, height) {
    sprite = new Sprite("../sprites/player.bmp");
    collision_type = CollisionType::Tiles;
}

void Player::Update() {
    velocity.x = 0;
    velocity.y = 0;
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
    }
}