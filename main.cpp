#include<SFML/Graphics.hpp>
#include<Loptica.h>
#include<Izvlacenje.h>
#include<PocetniEkran.h>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode::getDesktopMode(), "Lucky Six!", sf::Style::Fullscreen, settings);
    window.setFramerateLimit(60);

    sf::Texture tx;
    sf::Sprite bg;

    tx.loadFromFile("slike/bg.jpg");
    bg.setTexture(tx);

    Loptica l;
    PocetniEkran pe;

    sf::Clock clock;
    float elapsed = clock.getElapsedTime().asSeconds();

    int tokIgre = 0;

    int i = 0;

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

            Izvlacenje iz(i, window);

            iz.Draw(i, window);

            i++;
        }
        else
            pe.Draw(window);

        window.display();
    }

    return 0;
}
