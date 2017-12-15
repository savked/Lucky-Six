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

    // setting up the already clicked
    alreadyClicked.resize(48);
    for(unsigned int i = 0; i < alreadyClicked.size(); i++)
        alreadyClicked[i] = 0;

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
        m_brojeviZaBiranje[i].setColor(sf::Color(255, 255, 255, 50));
        if(i == 0)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(50.0f, 300.0f));
        else if(i > 0 && i <= 10)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 11)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 400.0f));
        else if(i > 11 && i <= 20)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 21)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 500.0f));
        else if(i > 21 && i <= 30)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 31)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 600.0f));
        else if(i > 31 && i <= 40)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 41)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(250.0f, 700.0f));
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
                    std::cout << "M_COUNTER: " << m_counter << std::endl;
                    if(alreadyClicked[i] == 0)
                    {
                        if(m_counter <= 5)
                        {
                            m_brojeviZaBiranje[i].setColor(sf::Color(255, 255, 255, 255));
                            alreadyClicked[i] = 1;
                            m_counter++;
                        }
                    }
                    else
                    {
                        m_brojeviZaBiranje[i].setColor(sf::Color(255, 255, 255, 50));
                        alreadyClicked[i] = 0;
                        m_counter--;
                    }
                }
    }
}
void Tiketi::uplatiClicked(sf::Event &event)
{
    m_brojevi.resize(50);
    m_imena.resize(50);
    m_ulog.resize(50);

    if(event.type == sf::Event::MouseButtonPressed)
        if(event.mouseButton.button == sf::Mouse::Left)
            if(m_uplatiBox.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                m_imena[asd] = str1;
                m_ulog[asd] = atoi(str2.c_str());
                for(unsigned int i = 0; i < alreadyClicked.size(); i++)
                {
                    if(alreadyClicked[i] == 1)
                    {
                        m_brojevi[tempJ] = i;
                        tempJ++;
                    }
                }

                asd++;
                Ispis();
                // reset everything to default
                setBrojeve();
                m_counter = 0;

                for(unsigned int i = 0; i < alreadyClicked.size(); i++)
                    alreadyClicked[i] = 0;

                flag = 0;
                str1 = "";
                m_enteredIme.setString("");
                str2 = "";
                m_enteredUlog.setString("");
            }
}
void Tiketi::Ispis()
{
    //ispis imena i uloge
    for(unsigned int i = 0; i < m_imena.size(); i++)
    {
        if(m_imena[i] != "")
            std::cout << m_imena[i] << std::endl;
        if(m_ulog[i] != 0)
            std::cout << m_ulog[i] << std::endl;
    }
    // ispis brojeva
    for(unsigned int i = 0; i < m_brojevi.size(); i++)
    {
        if(m_brojevi[i] != 0)
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
                flag = 1;
            }
        }
    }
}
void Tiketi::unosUloga(sf::Event &event)
{
    if(flag == 1)
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
