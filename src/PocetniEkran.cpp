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
}
int PocetniEkran::gameAccess(sf::Event &event, int &tokIgre)
{
    m_enteredText.setFont(m_ft);
    m_enteredText.setPosition(460.0f, 405.0f);

    if (event.type == sf::Event::TextEntered)
    {
        // CHANGING LAST TYPED CHARACTER TO DOT
        /*if(str.size() > 0)
            str.at(str.size() - 1) = '\u00B7';*/

        if (event.text.unicode == '\b')
        {
            str.erase(str.size() - 1, 1);
            m_enteredText.setString(str);
        }
        else if(event.text.unicode == 13)
        {
            if(str == "123") // sifra // password
            {
                m_flag = 0;

                m_pwText.setString("Loading ...");
                m_pwText.setColor(sf::Color::Green);
                m_pwText.setPosition(sf::Vector2f(550.0f, 450.0f));

                return tokIgre = 1;
            }
            else
            {
                m_pwText.setString("Pogresan password, probaj ponovo");
                m_pwText.setPosition(sf::Vector2f(390.0f, 340.0f));
                m_pwText.setColor(sf::Color::Red);

                return tokIgre = 0;
            }
        }
        else if (event.text.unicode < 128)
        {
            str += static_cast<char>(event.text.unicode);
            m_enteredText.setString(str);
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
    }
    else
    {
        m_window.draw(m_pwText);
    }
}
