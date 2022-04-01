#include "Entity.h"
#include "game.h"
#include "sprite_renderer.h"
#include <SDL2/SDL.h>
#include <iostream>

Entity::Entity() {
    position = glm::vec2(0, 0);
    velocity = glm::vec2(0, 0);
    collision_type = CollisionType::None;
    bounds = Rect();
}

Entity::Entity(int width, int height) {
    position = glm::vec2(0, 0);
    velocity = glm::vec2(0, 0);
    collision_type = CollisionType::None;
    bounds = Rect(0, 0, width, height);
}

void Entity::OnCollision(Entity* other) {
}
void Entity::OnCollision(Tilemap tilemap, int x, int y) {
}

void Entity::ResolveCollisionsX(std::vector<Rect> collisions) {
    for (Rect collision : collisions) {
        if (velocity.x > 0) {
            bounds.set_right(collision.left());
        }
        else if (velocity.x < 0) {
            bounds.set_left(collision.right());
        }
    }
}
void Entity::ResolveCollisionsY(std::vector<Rect> collisions) {
    for (Rect collision : collisions) {
        if (velocity.y > 0) {
            bounds.set_bottom(collision.top());
        }
        else if (velocity.y < 0) {
            bounds.set_top(collision.bottom());
        }
    }
}

void Entity::Update() {

}

void Entity::Render() {
    if (sprite != nullptr) {
        render_sprite(sprite, position);
    }    
}
