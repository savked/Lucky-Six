#include "Izvlacenje.h"

Izvlacenje::Izvlacenje()
{
    m_tx.resize(49);
    // ucitavanje
    for(unsigned int i = 1; i < m_tx.size(); i++)
    {
        s = to_string(i);
        m_tx[i].loadFromFile("slike/"+ s + ".png");
    }
    // ubacivanje brojeva u vektor
    m_moguciBrojevi.resize(48);

    int j = 1;
    for(unsigned int i = 0; i < m_moguciBrojevi.size(); i++)
    {
        m_moguciBrojevi[i] = j;
        j++;
    }

    std::random_shuffle(m_moguciBrojevi.begin(), m_moguciBrojevi.end());
}
void Izvlacenje::Animacija(sf::RenderWindow &m_window)
{
    m_izvucenBroj.resize(35);
    m_velikiBrojevi.resize(35);

    // loadovanje texture u sprite
    for(unsigned int i = 0; i < m_izvucenBroj.size(); i++)
    {
        if(i == 0)
        {
            m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
            m_izvucenBroj[i].setPosition(sf::Vector2f(420.0f,30.0f));
            m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        }
        else if(i > 0 && i <= 4)
        {
            m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
            m_izvucenBroj[i].setPosition(sf::Vector2f(m_izvucenBroj[i-1].getPosition().x + 100.0f,m_izvucenBroj[i-1].getPosition().y));
            m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        }
        /////
        else if(i == 5)
        {
            m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
            m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,100.0f));
            m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));

        }
        else if(i > 5 && i <= 13)
        {
            m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
            m_izvucenBroj[i].setPosition(sf::Vector2f(m_izvucenBroj[i-1].getPosition().x,m_izvucenBroj[i-1].getPosition().y + 100.0f));
            m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
            m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        }
        else if(i > 13 && i <= 25)
        {
            if(i == 14 || i == 17 || i == 20 || i == 23)
            {
                m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
                m_izvucenBroj[i].setPosition(sf::Vector2f(m_izvucenBroj[i-1].getPosition().x + 220.0f, 700.0f));
                m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
            }
            else
            {
                m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
                m_izvucenBroj[i].setPosition(sf::Vector2f(m_izvucenBroj[i-1].getPosition().x, m_izvucenBroj[i-1].getPosition().y + 100.0f));
                m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
            }
        }
        else if(i > 25 && i <= 35)
        {
            if(i == 26)
            {
                m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
                m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,100.0f));
                m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
            }
            else
            {
                m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
                m_izvucenBroj[i].setPosition(sf::Vector2f(m_izvucenBroj[i-1].getPosition().x, m_izvucenBroj[i-1].getPosition().y + 100.0f));
                m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
                m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
            }
        }

        m_window.draw(m_izvucenBroj[i]);
        m_window.draw(m_velikiBrojevi[i]);
    }
}
std::string Izvlacenje::to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}
