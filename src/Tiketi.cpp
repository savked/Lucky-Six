#include "Tiketi.h"

Tiketi::Tiketi()
{
    m_txBox.loadFromFile("slike/box.png");

    m_lopticeTx.resize(49);
    for(unsigned i = 1; i < m_lopticeTx.size(); i++)
    {
        s = to_string(i);
        m_lopticeTx[i].loadFromFile("slike/" + s + 'm' + ".png");
    }
    m_brojeviZaBiranje.resize(49);
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
        m_brojeviZaBiranje[i].setTexture(m_lopticeTx[i]);

    setBrojeve();

    m_font.loadFromFile("fonts/arial.ttf");

    m_imenaBox.setTexture(m_txBox);
    //m_brojeviBox.setTexture(m_txBox);
    m_ulogBox.setTexture(m_txBox);

    m_txtImena.setFont(m_font);
    //m_txtBrojevi.setFont(m_font);
    m_txtUlog.setFont(m_font);

    m_enteredIme.setFont(m_font);
    //m_enteredBrojevi.setFont(m_font);
    m_enteredUlog.setFont(m_font);

    m_imenaBox.setPosition(sf::Vector2f(200.0f, 100.0f));
    //m_brojeviBox.setPosition(sf::Vector2f(200.0f, 300.0f));
    m_ulogBox.setPosition(sf::Vector2f(700.0f, 100.0f));

    m_txtImena.setPosition(sf::Vector2f(340.0f, 50.0f));
    //m_txtBrojevi.setPosition(sf::Vector2f(20.0f, 305.0f));
    m_txtUlog.setPosition(sf::Vector2f(840.0f, 50.0f));

    m_txtImena.setString("Ime");
    //m_txtBrojevi.setString("Kombinacija");
    m_txtUlog.setString("Ulog");
}
void Tiketi::setBrojeve()
{
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        if(i == 0)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(50.0f, 400.0f));
        else if(i > 0 && i <= 10)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 11)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 500.0f));
        else if(i > 11 && i <= 20)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 21)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 600.0f));
        else if(i > 21 && i <= 30)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 31)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 700.0f));
        else if(i > 31 && i <= 40)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 41)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(250.0f, 800.0f));
        else if(i > 41 && i <= 48)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
    }
}
void Tiketi::unosImena(sf::Event &event)
{
    if(flag == 0)
    {
        m_enteredIme.setPosition(sf::Vector2f(210.0f, 105.0f));
        if (event.type == sf::Event::TextEntered)
        {
            if(event.text.unicode == '\b' && str1.size() != 0)
            {
                str1.erase(str1.size() - 1, 1);
                m_enteredIme.setString(str1);
            }
            else if (event.text.unicode < 128)
            {
                str1 += static_cast<char>(event.text.unicode);
                m_enteredIme.setString(str1);
            }
            // ako se pritsine enter
            if(event.text.unicode == 13)
            {
                str1.erase(str1.size() - 1, 1);
                m_enteredIme.setString(str1);
                flag = 2;
            }
        }
    }
}
/*void Tiketi::unosBrojeva(sf::Event &event)
{
    if(flag == 1)
    {
        m_enteredBrojevi.setPosition(sf::Vector2f(210.0f, 305.0f));
        if (event.type == sf::Event::TextEntered)
        {
            if(event.text.unicode == '\b' && str2.size() != 0)
            {
                str2.erase(str2.size() - 1, 1);
                m_enteredBrojevi.setString(str2);
            }
            else if(event.text.unicode < 128)
            {
                str2 += static_cast<char>(event.text.unicode);
                m_enteredBrojevi.setString(str2);
            }
            if(event.text.unicode == 13)
            {
                str2.erase(str2.size() - 1, 1);
                m_enteredBrojevi.setString(str2);
                flag = 2;
            }
        }
    }
}*/
void Tiketi::unosUloga(sf::Event &event)
{
    if(flag == 2)
    {
        m_enteredUlog.setPosition(sf::Vector2f(710.0f, 105.0f));
        if (event.type == sf::Event::TextEntered)
        {
            if(event.text.unicode == '\b' && str3.size() != 0)
            {
                str3.erase(str3.size() - 1, 1);
                m_enteredUlog.setString(str3);
            }
            else if(event.text.unicode < 128)
            {
                str3 += static_cast<char>(event.text.unicode);
                m_enteredUlog.setString(str3);
            }
            // ako se pritisne enter ubacuje sve u vektore
            if(event.text.unicode == 13)
            {
                str3.erase(str3.size() - 1, 1);
                m_enteredUlog.setString(str3);
            }
        }
    }
}
void Tiketi::Draw(sf::RenderWindow &m_window)
{
    // draw numbers
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        m_window.draw(m_brojeviZaBiranje[i]);
    }
    m_window.draw(m_imenaBox);
    //m_window.draw(m_brojeviBox);
    m_window.draw(m_ulogBox);

    m_window.draw(m_txtImena);
    //m_window.draw(m_txtBrojevi);
    m_window.draw(m_txtUlog);

    m_window.draw(m_enteredIme);
    //m_window.draw(m_enteredBrojevi);
    m_window.draw(m_enteredUlog);
}
