#include "update.hpp"

void update(sf::RenderWindow &window, World &world)
{
    while (const std::optional event = window.pollEvent())
    {
        if (event->is<sf::Event::Closed>())
            window.close();
    }
}