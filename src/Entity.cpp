#include "Entity.h"
#include "game.h"
#include "sprite_renderer.h"
#include <SDL2/SDL.h>
#include <iostream>

Entity::Entity(){
    position = glm::vec2(0, 0);
    velocity = glm::vec2(0, 0);
}
void Entity::UpdatePosition() {
    position += velocity;
}

void Entity::Update() {

}

void Entity::Render() {
    if (sprite != nullptr) {
        render_sprite(sprite, position);
    }    
}
