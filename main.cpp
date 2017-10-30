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
    sf::Text enteredText;
    sf::Font arial;
    std::string str;
    //////////
    arial.loadFromFile("fonts/arial.ttf");
    enteredText.setFont(arial);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
                window.close();

            enteredText.setPosition(460.0f, 405.0f);
            if (event.type == sf::Event::TextEntered)
            {
                if (event.text.unicode == '\b')
                {
                    str.erase(str.size() - 1, 1);
                    enteredText.setString(str);
                }
                else if (event.text.unicode < 128)
                {
                    str += static_cast<char>(event.text.unicode);
                    enteredText.setString(str);
                }
            }
        }
        // enter - U+E007 // backspace - U+0008

        if (!tokIgre)
        {
            iz.Draw(window);
            l.Draw(window);
        }

        window.clear();
        window.draw(bg);
        pe.Draw(window);
        window.draw(enteredText);

        window.display();
    }

    return 0;
}
