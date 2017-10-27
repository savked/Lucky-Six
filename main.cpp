#include <SFML/Graphics.hpp>
#include <Loptica.h>
#include <Izvlacenje.h>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Lucky Six!", sf::Style::Fullscreen, settings);

    sf::Texture tx;
    tx.loadFromFile("slike/bg.jpg");

    sf::Sprite bg;
    bg.setTexture(tx);

    Loptica l;
    Izvlacenje iz;

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


        // TOK IGRE


        window.clear();
        window.draw(bg);
        iz.Draw(window);
        l.Draw(window);

        window.display();
    }

    return 0;
}
