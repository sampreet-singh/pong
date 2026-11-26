#include "render.hpp"

#include "input.hpp"

void render(sf::RenderWindow &window, const World &world, const Score &score)
{
    handleEvents(window);
    window.clear();
    window.display();
};