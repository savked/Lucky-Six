#include "Loptica.h"

Loptica::Loptica()
{
    txD.loadFromFile("slike/detelina.png");

    detelina1.setTexture(txD);
    detelina2.setTexture(txD);

    RandomDet(detelina1, detelina2);

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
void Loptica::RandomDet(sf::Sprite &d1, sf::Sprite &d2)
{
    srand(time(NULL));

    float xPozicije[30] = {84.0f, 84.0f, 84.0f, 84.0f, 84.0f, 84.0f, 84.0f, 84.0f, 84.0f};
    float yPozicije[30] = {103.0f, 204.0f, 304.0f, 404.0f, 504.0f, 604.0f, 704.0f, 804.0f, 904.0f};

    int rd1X = rand() % 9 + 0; // promeniti na 30 kad se unesu sve moguce pozicije
    int rd1Y = rand() % 9 + 0; // ----------------------||------------------------

    int rd2X = rand() % 9 + 0;
    int rd2Y = rand() % 9 + 0;

    if(rd1X == rd2X && rd1Y == rd2Y)
    {
        rd1X = rand() % 9 + 0;
        rd1Y = rand() % 9 + 0;

        rd2X = rand() % 9 + 0;
        rd2Y = rand() % 9 + 0;
    }

    d1.setPosition(sf::Vector2f(xPozicije[rd1X], yPozicije[rd1Y]));
    d2.setPosition(sf::Vector2f(xPozicije[rd2X], yPozicije[rd2Y]));
}
void Loptica::Draw(sf::RenderWindow &m_window)
{

    for(int i = 0; i < 35; i++)
    {
        m_window.draw(m_body[i]);
        Texts odds;
        odds.DrawText(m_window);
    }

    m_window.draw(detelina1);
    m_window.draw(detelina2);
}
