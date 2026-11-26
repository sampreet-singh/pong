#pragma once

#include <SFML/Graphics/RenderWindow.hpp>

struct Input
{
    float leftPaddle;
    float rightPaddle;
};

Input playerInput();

void handleEvents(sf::RenderWindow &window);