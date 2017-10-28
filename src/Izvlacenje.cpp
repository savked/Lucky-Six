#include "Izvlacenje.h"

Izvlacenje::Izvlacenje()
{
    // ucitavanje
    for(int i = 1; i <= 48; i++)
    {
        s = to_string(i);
        m_tx[i].loadFromFile("slike/"+ s + ".png");
    }
    // loadovanje texture u sprite
    for(int i = 1; i <= 48; i++)
    {
        m_brojevi[i].setTexture(m_tx[i]);
    }

}
void Izvlacenje::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_brojevi[13]);
}

