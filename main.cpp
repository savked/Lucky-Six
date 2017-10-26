#include <SFML/Graphics.hpp>
#include "Loptica.h"

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Lucky Six!", sf::Style::Fullscreen, settings);

    sf::Texture tx;
    tx.loadFromFile("slike/bg.jpg");

    sf::Sprite bg;
    bg.setTexture(tx);

    // resajzovanje slike na window size
    //bg.setScale(window.getSize().x, window.getSize().y);

    Loptica l;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }
        window.clear();
        window.draw(bg);
        l.Draw(window);
        window.display();
    }

    return 0;
}
