#include "Izvlacenje.h"

Izvlacenje::Izvlacenje(int i, sf::RenderWindow &m_window)
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

    m_izvucenBroj.resize(35);
    m_velikiBrojevi.resize(35);

    // loadovanje texture u sprite
    switch(i)
    {
    case 0:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(420.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 1:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 2:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(620.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 3:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(720.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 4:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(820.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 5:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,100.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 6:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,200.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 7:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,300.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 8:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,400.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 9:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,500.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 10:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,600.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 11:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,700.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 12:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,800.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 13:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,900.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 14:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(300.0f,700.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 15:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(300.0f,800.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 16:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(300.0f,900.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 17:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,700.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 18:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,800.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 19:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,900.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 20:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(740.0f,700.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 21:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(740.0f,800.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 22:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(740.0f,900.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 23:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(960.0f,700.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 24:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(960.0f,800.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 25:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(960.0f,900.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 26:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,100.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 27:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,200.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 28:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,300.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 29:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,400.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 30:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,500.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 31:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,600.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 32:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,700.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 33:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,800.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    case 34:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_velikiBrojevi[i].setPosition(sf::Vector2f(430.0f, 130.0f));
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,900.0f));
        m_izvucenBroj[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setScale(sf::Vector2f(0.120f, 0.120f));
        break;
    }
    m_window.draw(m_velikiBrojevi[i]);
}
void Izvlacenje::Draw(int i, sf::RenderWindow &m_window2)
{
    m_window2.draw(m_izvucenBroj[i]);
}
std::string Izvlacenje::to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}
