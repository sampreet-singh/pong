#pragma once

#include <SFML/System/Vector2.hpp>

struct Paddle
{
    sf::Vector2f position;
    sf::Vector2f size;
};

struct Ball
{
    sf::Vector2f position;
    float radius;
};

struct World
{
    Paddle leftPaddle;
    Paddle rightPaddle;

    Ball ball;

    void reset();
};