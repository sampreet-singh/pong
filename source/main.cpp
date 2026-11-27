#include "constants.hpp"
#include "world.hpp"
#include "update.hpp"
#include "render.hpp"

#include <SFML/Graphics.hpp>

int main()
{
    sf::Vector2 dimensions = {constants::window::width, constants::window::height};
    sf::VideoMode videoMode(dimensions);

    sf::RenderWindow window(videoMode, "Pong");
    window.setFramerateLimit(constants::window::framerate);

    World world;
    world.reset();

    while (window.isOpen())
    {
        update(window, world);
        render(window, world);
    }

    return 0;
}