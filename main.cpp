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
    sf::Sprite bg;

    tx.loadFromFile("slike/bg.jpg");
    bg.setTexture(tx);

    Loptica l;
    Izvlacenje iz;
    PocetniEkran pe;

    int tokIgre = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            pe.gameAccess(event, tokIgre);
        }

        window.clear();
        window.draw(bg);

        if(tokIgre == 1)
        {
            l.Draw(window);
            iz.Animacija(window);
        }
        else
            pe.Draw(window);

        window.display();
    }

    return 0;
}
