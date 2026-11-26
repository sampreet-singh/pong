#include "render.hpp"

#include "input.hpp"

#include <SFML/Graphics/CircleShape.hpp>
#include <SFML/Graphics/RectangleShape.hpp>

void render(sf::RenderWindow &window, const World &world, const Score &score)
{
    static sf::CircleShape ball;
    static sf::RectangleShape leftPaddle;
    static sf::RectangleShape rightPaddle;

    static bool firstRun = true;

    if (firstRun)
    {
        ball.setRadius(world.ball.radius);

        leftPaddle.setSize(world.leftPaddle.size);
        rightPaddle.setSize(world.rightPaddle.size);

        firstRun = false;
    }

    ball.setPosition(world.ball.position);

    leftPaddle.setPosition(world.leftPaddle.position);
    rightPaddle.setPosition(world.rightPaddle.position);

    handleEvents(window);
    window.clear();

    window.draw(ball);
    window.draw(leftPaddle);
    window.draw(rightPaddle);

    window.display();
}