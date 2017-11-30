#include "Tiketi.h"

Tiketi::Tiketi()
{
    m_txBox.loadFromFile("slike/box.png");
    m_uplatiTx.loadFromFile("slike/uplati.png");

    m_uplatiBox.setTexture(m_uplatiTx);
    m_uplatiBox.setPosition(sf::Vector2f(450.0f, 920.0f));


    m_lopticeTx.resize(49);
    for(unsigned i = 1; i < m_lopticeTx.size(); i++)
    {
        s = to_string(i);
        m_lopticeTx[i].loadFromFile("slike/" + s + 'm' + ".png");
    }
    m_brojeviZaBiranje.resize(49);
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
        m_brojeviZaBiranje[i].setTexture(m_lopticeTx[i]);

    // setting up the empty circles
    m_body.resize(6);
    for(unsigned int i = 0; i < m_body.size(); i++)
    {
        m_body[i].setRadius(30.0f);
        m_body[i].setFillColor(sf::Color(128,128,128,200));
        m_body[i].setOutlineColor(sf::Color(210,210,210, 255));
        m_body[i].setOutlineThickness(2.0f);

        if(i == 0)
            m_body[i].setPosition(sf::Vector2f(350.0f, 250.0f));
        else
            m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 100, m_body[i-1].getPosition().y));
    }

    setBrojeve();

    m_font.loadFromFile("fonts/arial.ttf");

    m_imenaBox.setTexture(m_txBox);
    m_ulogBox.setTexture(m_txBox);

    m_txtImena.setFont(m_font);
    m_txtUlog.setFont(m_font);

    m_enteredIme.setFont(m_font);
    m_enteredUlog.setFont(m_font);

    m_imenaBox.setPosition(sf::Vector2f(200.0f, 100.0f));
    m_ulogBox.setPosition(sf::Vector2f(700.0f, 100.0f));

    m_txtImena.setPosition(sf::Vector2f(340.0f, 50.0f));
    m_txtUlog.setPosition(sf::Vector2f(840.0f, 50.0f));

    m_txtImena.setString("Ime");
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
void Tiketi::clickedOnNumber(sf::Event &event)
{
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        if(event.type == sf::Event::MouseButtonPressed)
            if(event.mouseButton.button == sf::Mouse::Left)
                if(m_brojeviZaBiranje[i].getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
                {
                    switch(m_counter)
                    {
                    case 0:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(350.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 1:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(450.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 2:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(550.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 3:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(650.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 4:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(750.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 5:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(850.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    }
                    m_counter++;
            }
    }
}
void Tiketi::uplatiClicked(sf::Event &event)
{
    m_brojevi.resize(6);
    m_imena.resize(50);
    m_ulog.resize(50);
    if(event.type == sf::Event::MouseButtonPressed)
        if(event.mouseButton.button == sf::Mouse::Left)
            if(m_uplatiBox.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                m_imena[asd] = str1;
                m_ulog[asd] = atoi(str2.c_str());

                asd++;
                Ispis();
            }
}
void Tiketi::Ispis()
{
    for(unsigned int i = 0; i < m_brojevi.size(); i++)
    {
        std::cout << m_imena[i] << std::endl;
        std::cout << m_ulog[i] << std::endl;
        std::cout << m_brojevi[i] << std::endl;
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
void Tiketi::unosUloga(sf::Event &event)
{
    if(flag == 2)
    {
        m_enteredUlog.setPosition(sf::Vector2f(710.0f, 105.0f));
        if (event.type == sf::Event::TextEntered)
        {
            if(event.text.unicode == '\b' && str2.size() != 0)
            {
                str2.erase(str2.size() - 1, 1);
                m_enteredUlog.setString(str2);
            }
            else if(event.text.unicode < 128)
            {
                str2 += static_cast<char>(event.text.unicode);
                m_enteredUlog.setString(str2);
            }
            // ako se pritisne enter ubacuje sve u vektore
            if(event.text.unicode == 13)
            {
                str2.erase(str2.size() - 1, 1);
                m_enteredUlog.setString(str2);
            }
        }
    }
}
void Tiketi::Draw(sf::RenderWindow &m_window)
{
    // drawing empty circles
    for(unsigned int i = 0; i < m_body.size(); i++)
    {
        m_window.draw(m_body[i]);
    }

    // draw numbers
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        m_window.draw(m_brojeviZaBiranje[i]);
    }
    m_window.draw(m_imenaBox);
    m_window.draw(m_ulogBox);
    m_window.draw(m_uplatiBox);

    m_window.draw(m_txtImena);
    m_window.draw(m_txtUlog);

    m_window.draw(m_enteredIme);
    m_window.draw(m_enteredUlog);
}
