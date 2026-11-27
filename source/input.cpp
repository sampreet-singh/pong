#include "input.hpp"

#include <SFML/Window/Keyboard.hpp>

Input keyboardInput()
{
    Input input{};

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
    {
        input.left -= 1.f;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
    {
        input.left += 1.f;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
    {
        input.right -= 1.f;
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
    {
        input.right += 1.f;
    }

    return input;
}