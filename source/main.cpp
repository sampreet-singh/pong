#include "render.hpp"
#include "score.hpp"
#include "update.hpp"
#include "world.hpp"

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Pong");

    window.setFramerateLimit(60);

    Score score;
    World world;

    while (window.isOpen())
    {
        update(world, score);
        render(window, world, score);
    }

    return 0;
}