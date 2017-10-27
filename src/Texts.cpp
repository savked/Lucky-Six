#include "Texts.h"

Texts::Texts()
{
    m_arial.loadFromFile("fonts/arial.ttf");

    m_tx[0].setString("10.000");
    m_tx[1].setString("7.500");
    m_tx[2].setString("5.000");
    m_tx[3].setString("2.500");
    m_tx[4].setString("1.000");
    m_tx[5].setString("500");
    m_tx[6].setString("300");
    m_tx[7].setString("200");
    m_tx[8].setString("150");
    m_tx[9].setString("100");
    m_tx[10].setString("90");
    m_tx[11].setString("80");
    m_tx[12].setString("70");
    m_tx[13].setString("60");
    m_tx[14].setString("50");
    m_tx[15].setString("40");
    m_tx[16].setString("30");
    m_tx[17].setString("25");
    m_tx[18].setString("20");
    m_tx[19].setString("15");
    m_tx[20].setString("10");
    m_tx[21].setString("9");
    m_tx[22].setString("8");
    m_tx[23].setString("7");
    m_tx[24].setString("6");
    m_tx[25].setString("5");
    m_tx[26].setString("4");
    m_tx[27].setString("3");
    m_tx[28].setString("2");
    m_tx[29].setString("1");

    for(int i = 0; i < 30; i++)
    {
        m_tx[i].setFont(m_arial);
        m_tx[i].setScale(sf::Vector2f(0.80f,0.80f));

        float x = 355.0f;
        m_tx[0].setPosition(sf::Vector2f(155.0f,115.0f));

        m_tx[i].setPosition(sf::Vector2f(155.0f, m_tx[i-1].getPosition().y + 100.0f));
        if(i == 9 || i == 12 || i == 15 || i == 18)
            m_tx[i].setPosition(sf::Vector2f(m_tx[i-1].getPosition().x + 220.0f, 710.0f));
        else
            m_tx[i].setPosition(sf::Vector2f(m_tx[i-1].getPosition().x, m_tx[i-1].getPosition().y + 100.0f));
        if(i > 20 && i <= 30)
        {
            if(i == 21)
                m_tx[i].setPosition(sf::Vector2f(1225.0f,110.0f));
            else
                m_tx[i].setPosition(sf::Vector2f(m_tx[i-1].getPosition().x, m_tx[i-1].getPosition().y + 100.0f));
        }
    }
}
void Texts::DrawText(sf::RenderWindow &m_window)
{
    for(int i = 0; i < 35; i++)
    {
        m_window.draw(m_tx[i]);
    }
}
