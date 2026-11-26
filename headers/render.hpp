#pragma once

#include "score.hpp"
#include "world.hpp"

#include <SFML/Graphics/RenderWindow.hpp>

void render(sf::RenderWindow& window, const World& world, const Score& score);