#include "Entity.h"
#include "game.h"
#include "sprite_renderer.h"
#include <SDL2/SDL.h>

void Entity::update_position() {
    position += velocity;
}

void Entity::update() {

}

void Entity::render() {
    if (sprite != nullptr) {
        render_sprite(sprite, position);
    }    
}
