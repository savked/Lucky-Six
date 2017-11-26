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
    Izvlacenje iz;

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

            Sleep(2000);
            iz.Draw(i, window);
            iz.DrawVeliki(i, window);

            for(int j = 0; j < i; j++)
            {
                iz.Draw(j, window);
                iz.DrawVeliki(i, window);
            }

            i++;
        }
        else
            pe.Draw(window);

        window.display();
    }

    return 0;
}
