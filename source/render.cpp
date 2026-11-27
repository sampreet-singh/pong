#include "render.hpp"

#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/CircleShape.hpp>

void render(sf::RenderWindow &window, World &world)
{
    static sf::RectangleShape leftPaddle;
    static sf::RectangleShape rightPaddle;

    static bool ready = false;

    if (!ready)
    {
        leftPaddle.setSize(world.leftPaddle.size);
        rightPaddle.setSize(world.rightPaddle.size);

        ready = true;
    }

    leftPaddle.setPosition(world.leftPaddle.position);
    rightPaddle.setPosition(world.rightPaddle.position);

    window.clear();

    window.draw(leftPaddle);
    window.draw(rightPaddle);

    window.display();
}