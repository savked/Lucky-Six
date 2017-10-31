#include "PocetniEkran.h"

PocetniEkran::PocetniEkran()
{
    m_box_tx.loadFromFile("slike/box.png");
    m_box.setTexture(m_box_tx);

    m_ft.loadFromFile("fonts/arial.ttf");
    m_pwText.setFont(m_ft);

    m_pwText.setString("Ukucaj password da bi pristupio programu"); // Enter password to get access
    m_pwText.setPosition(sf::Vector2f(350.0f, 340.0f));

    m_box.setPosition(sf::Vector2f(450.0f, 400.0f));
    m_box.setColor(sf::Color::White);

    // circle shape (button for logging in)
    m_cs.setRadius(40.0f);
    m_cs.setPosition(sf::Vector2f(500.0f, 500.0f));
    m_cs.setFillColor(sf::Color::Cyan);
}
void PocetniEkran::gameAccess(sf::Event &event, int tokIgre)
{
    m_enteredText.setFont(m_ft);
    m_enteredText.setPosition(460.0f, 405.0f);

    if (event.type == sf::Event::TextEntered)
    {
        if (event.text.unicode == '\b')
        {
            str.erase(str.size() - 1, 1);
            m_enteredText.setString(str);
        }
        else if (event.text.unicode < 128)
        {
            str += static_cast<char>(event.text.unicode);
            m_enteredText.setString(str);
        }
    }
    if(event.type == sf::Event::MouseButtonPressed)
    {
        if(event.mouseButton.button == sf::Mouse::Left)
            if(m_cs.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
                if(str == "123") // sifra // password
                {
                    m_flag = 0;

                    m_pwText.setString("Loading ...");
                    m_pwText.setColor(sf::Color::Green);
                    m_pwText.setPosition(sf::Vector2f(550.0f, 450.0f));

                    tokIgre = 1;
                }
                else
                {
                    m_pwText.setString("Pogresna sifra, probaj ponovo");
                    m_pwText.setColor(sf::Color::Red);
                }
    }
}
void PocetniEkran::Draw(sf::RenderWindow &m_window)
{
    if(m_flag == 1)
    {
        m_window.draw(m_enteredText);
        m_window.draw(m_box);
        m_window.draw(m_pwText);
        m_window.draw(m_cs);
    }
    else
    {
        m_window.draw(m_pwText);
    }

}
