#include "Loptica.h"

Loptica::Loptica()
{
    for(int i = 0; i < 35; i++)
    {
        m_body[i].setRadius(30.0f);
        m_body[i].setFillColor(sf::Color(128,128,128,220));
        m_body[i].setOutlineColor(sf::Color(200,200,200, 255));
        m_body[i].setOutlineThickness(2.0f);

        // PRVIH 6
        if(i == 0)
            m_body[i].setPosition(sf::Vector2f(400.0f,50.0f));
        else if(i > 0 && i <= 4)
            m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 100.0f,m_body[i-1].getPosition().y));
        /////
        else if(i == 5)
        {
            m_body[i].setPosition(sf::Vector2f(80.0f, 100.0f));
        }
        else if(i > 5 && i <= 13)
        {
            m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x,m_body[i-1].getPosition().y + 100.0f));
        }
        else if(i > 13 && i <= 25)
        {
            if(i == 14 || i == 17 || i == 20 || i == 23)
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 200.0f, 700.0f));
            else
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x, m_body[i-1].getPosition().y + 100.0f));
        }
        else if(i > 25 && i <= 35)
        {
            if(i == 26)
                m_body[i].setPosition(sf::Vector2f(1150.0f,100.0f));
            else
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x, m_body[i-1].getPosition().y + 100.0f));
        }
    }
}
void Loptica::Draw(sf::RenderWindow &m_window)
{
    for(int i = 0; i < 35; i++)
    {
        m_window.draw(m_body[i]);
        Texts odds;
        odds.DrawText(m_window);
    }
}
