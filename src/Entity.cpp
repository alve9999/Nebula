#include "Entity.h"
#include "game.h"
#include "sprite_renderer.h"
#include <SDL2/SDL.h>
#include <iostream>

Entity::Entity(){
    position = glm::vec2(0, 0);
    velocity = glm::vec2(0, 0);
    collision_type = CollisionType::None;
}

void Entity::OnCollision(Entity* other){
}

void Entity::OnCollision(Tilemap tilemap, int x, int y) {
}

void Entity::Update() {

}

void Entity::Render() {
    if (sprite != nullptr) {
        render_sprite(sprite, position);
    }    
}
