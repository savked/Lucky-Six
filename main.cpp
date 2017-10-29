#include<SFML/Graphics.hpp>
#include<Loptica.h>
#include<Izvlacenje.h>
#include<PocetniEkran.h>

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
    PocetniEkran pe;

    //variables for main
    bool tokIgre = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();
        }

        window.clear();
        window.draw(bg);
        pe.Draw(window);
        iz.Draw(window);
        l.Draw(window);

        window.display();
    }

    return 0;
}
