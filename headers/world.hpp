#pragma once

#include <SFML/System/Vector2.hpp>

struct Object
{
    sf::Vector2f position;
    sf::Vector2f velocity;
};

struct Ball : Object
{
    float radius;
};

struct Paddle : Object
{
    sf::Vector2f size;
};

struct World
{
    Ball ball;
    Paddle leftPaddle;
    Paddle rightPaddle;
};