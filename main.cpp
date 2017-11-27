#include<SFML/Graphics.hpp>
#include<Loptica.h>
#include<Izvlacenje.h>
#include<PocetniEkran.h>
#include<Tiketi.h>

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
    Tiketi t;

    sf::Sprite exit;
    sf::Texture txExit;

    txExit.loadFromFile("slike/exit.png");
    exit.setTexture(txExit);
    exit.setPosition(1250.0f, -3.0f);
    exit.setScale(0.07f, 0.07f);

    int tokIgre = 0;

    int i = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            if(event.type == sf::Event::MouseButtonPressed)
                if(event.mouseButton.button == sf::Mouse::Left)
                    if(exit.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
                        window.close();

            pe.gameAccess(event, tokIgre);
        }

        window.clear();
        window.draw(bg);
        window.draw(exit);

        if(tokIgre == 1)
        {
            l.Draw(window);

            if(i > 0)
                Sleep(4000);

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
            t.Draw(window);
            //pe.Draw(window);

        window.display();
    }

    return 0;
}
