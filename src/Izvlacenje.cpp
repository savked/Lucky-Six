#include "Izvlacenje.h"

Izvlacenje::Izvlacenje()
{
    // ucitavanje
    for(int i = 1; i <= 48; i++)
    {
        s = to_string(i);
        m_tx[i].loadFromFile("slike/"+ s + ".png");
    }

    srand(time(NULL));
    int rd = rand() % 48 + 1;

    // loadovanje texture u sprite
    m_izvucenBroj.setPosition(sf::Vector2f(400.0f, 130.0f));
    m_izvucenBroj.setTexture(m_tx[7]);
}
/*void Izvlacenje::Animacija()
{
}*/
void Izvlacenje::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_izvucenBroj);
}

std::string Izvlacenje::to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}
