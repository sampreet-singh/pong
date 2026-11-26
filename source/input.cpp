#include "input.hpp"

#include <SFML/Window/Keyboard.hpp>

Input playerInput()
{
    Input input{};

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
        input.leftPaddle -= 1.f;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        input.leftPaddle += 1.f;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        input.rightPaddle -= 1.f;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        input.rightPaddle += 1.f;

    return input;
}

void handleEvents(sf::RenderWindow &window)
{
    while (const std::optional event = window.pollEvent())
    {
        if (event->is<sf::Event::Closed>())
            window.close();
    }
}