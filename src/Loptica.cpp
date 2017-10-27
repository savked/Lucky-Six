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
        m_body[i].setFillColor(sf::Color(128,128,128,200));
        m_body[i].setOutlineColor(sf::Color(210,210,210, 255));
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
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 220.0f, 700.0f));
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

    int rd1X; //= rand() % 12 + 0; // promeniti na 30 kad se unesu sve moguce pozicije
    int rd1Y; //= rand() % 8 + 0; // ----------------------||------------------------

    int rd2X; //= rand() % 12 + 0;
    int rd2Y; //= rand() % 8 + 0;

    float xPozicija1 = 84.0f;
    float yPozicije1[9] = {103.0f, 204.0f, 304.0f, 404.0f, 504.0f, 604.0f, 704.0f, 804.0f, 904.0f};

    float xPozicije2[4] = {304.0f, 524.0f, 744.0f, 964.0f};
    float yPozicije2[3] = {704.0f, 804.0f, 904.0f};

    float xPozicija3 = 1154.0f;
    float yPozicije3[9] = {103.0f, 204.0f, 304.0f, 404.0f, 504.0f, 604.0f, 704.0f, 804.0f, 904.0f};

    int choice = rand() % 3 + 1;

    switch(choice)
    {
    case 1:
        while(rd1X != rd2X && rd1Y != rd2Y)
        {
            rd1X = xPozicija1;
            rd1Y = rand() % 9;

            rd2X = xPozicija1;
            rd2Y = rand() % 9;
        }

        d1.setPosition(sf::Vector2f(rd1X, yPozicije1[rd1Y]));
        d2.setPosition(sf::Vector2f(rd2X, yPozicije1[rd2Y]));
        break;

    case 2:
        while(rd1X != rd2X && rd1Y != rd2Y)
        {
            rd1X = rand() % 4;
            rd1Y = rand() % 3;

            rd2X = rand() % 4;
            rd2Y = rand() % 3;
        }

        d1.setPosition(sf::Vector2f(xPozicije2[rd1X], yPozicije2[rd1Y]));
        d2.setPosition(sf::Vector2f(xPozicije2[rd2X], yPozicije2[rd2Y]));

        break;
    case 3:
        while(rd1X != rd2X && rd1Y != rd2Y)
        {
            rd1X = xPozicija3;
            rd1Y = rand() % 9;

            rd2X = xPozicija3;
            rd2Y = rand() % 9;
        }

        d1.setPosition(sf::Vector2f(rd1X, yPozicije3[rd1Y]));
        d2.setPosition(sf::Vector2f(rd2X, yPozicije3[rd2Y]));

    }

    // DODATI DA SE NE PONAVLJAJU DETELINE !
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
