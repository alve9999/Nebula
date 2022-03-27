#include "Entity.h"

void Entity::update_position(){
    position += velocity;
}

void Entity::update_velocity(int velocity_x , int velocity_y){
    velocity.x = velocity_x;
    velocity.y = velocity_y;
}

void Entity::update(){
    update_position();
    render();
}