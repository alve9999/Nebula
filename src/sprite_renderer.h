#pragma once
#include <glm/glm.hpp>
#include "Sprite.h"
#include "shapes.h"

void render_sprite(Sprite* sprite, glm::vec2 pos);
void render_sprite(Sprite* sprite, glm::vec2 pos, int width, int height);