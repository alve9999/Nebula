#include "Entity.h"
#include "game.h"
#include <SDL2/SDL.h>
#include <iostream>

SDL_Texture* texture = nullptr;

void Entity::update_position() {
    position += velocity;
}

void Entity::update() {

}

void Entity::render() {
    if (texture != nullptr) {
        std::cout << "Test" << std::endl;
        SDL_RenderCopy(renderer, texture, NULL, NULL);
    }    
}
 