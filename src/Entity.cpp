#include "Entity.h"
#include "game.h"
#include <SDL2/SDL.h>

SDL_Texture* texture = nullptr;

void Entity::update_position() {
    position += velocity;
}

void Entity::update() {

}

void Entity::render() {
    if (texture != nullptr) {
        SDL_RenderCopy(renderer, texture, NULL, NULL);
    }    
}
