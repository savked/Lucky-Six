#include "Izvlacenje.h"

Izvlacenje::Izvlacenje()
{
    // ucitavanje
    for(int i = 1; i <= 48; i++)
    {
        s = to_string(i);
        m_tx[i].loadFromFile("slike/"+ s + ".png");
        m_tx[i].setSmooth(true);
    }

    // loadovanje texture u sprite
    //m_izvucenBroj[2].setScale(sf::Vector2f(0.120f, 0.120f));
    m_izvucenBroj[2].setPosition(sf::Vector2f(640, 412));
    m_izvucenBroj[2].setTexture(m_tx[2]);
}
void Izvlacenje::Animacija()
{
    srand(time(NULL));
    int rd = rand() % 48 + 1;

    bool animProgress = false;
    //m_izvucenBroj[2].setScale(sf::Vector2f(0.120f, 0.120f));
    m_izvucenBroj[2].setOrigin(sf::Vector2f(250.0f, 250.0f));

    m_izvucenBroj[2].rotate(60.0f);
}
/*void Izvlacenje::Timer()
{
    // timer
    int minuti = 05, sekunde = 00;

    while(minuti != 00 && sekunde != 00)
    {
        sekunde--;

        Sleep(1000);

        if(sekunde <= 00)
        {
            minuti--;
            sekunde = 59;
        }
    }
    if(minuti == 00 && sekunde == 0)
        m_counterDone = true;
}*/
void Izvlacenje::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_izvucenBroj[2]);
}

std::string Izvlacenje::to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}
