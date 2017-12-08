#include<SFML/Graphics.hpp>
#include<Loptica.h>
#include<Izvlacenje.h>
#include<Timer.h>
#include<Lista.h>

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
    Izvlacenje iz;
    Timer t;
    Tiketi ti;
    Lista lis;

    sf::Sprite exit;
    sf::Texture txExit;

    txExit.loadFromFile("slike/exit.png");
    exit.setTexture(txExit);
    exit.setPosition(1250.0f, -3.0f);
    exit.setScale(0.07f, 0.07f);

    int startFlag = 0;

    int i = 0;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type == sf::Event::MouseButtonPressed)
                if(event.mouseButton.button == sf::Mouse::Left)
                    if(exit.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
                        window.close();

            t.clickedOn(event, startFlag);
            ti.PressedEscape(startFlag);

            ti.unosImena(event);
            ti.unosUloga(event);
            ti.clickedOnNumber(event);
            ti.uplatiClicked(event);
        }

        window.clear();
        window.draw(bg);
        window.draw(exit);

        t.timerDone(startFlag);

        switch(startFlag)
        {
        case 1:     // izvlacenje
            l.Draw(window);

            if(i > 0)
                Sleep(2500);

            iz.Draw(i, window);
            iz.DrawVeliki(i, window);

            for(int j = 0; j < i; j++)
            {
                iz.Draw(j, window);
                iz.DrawVeliki(i, window);
            }

            ++i;
            break;
        case 2:     // tiket
            ti.Draw(window);
            break;
        case 3:     // lista
            lis.Draw(window);
            break;
        default:    // timer
            t.Draw(window);
            break;
        }

        window.display();
    }

    return 0;
}
