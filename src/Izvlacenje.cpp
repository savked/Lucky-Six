#include "Izvlacenje.h"

Izvlacenje::Izvlacenje()
{
    m_tx.resize(49);
    m_tx_manji.resize(49);
    // ucitavanje
    for(unsigned int i = 1; i < m_tx.size(); i++)
    {
        s = to_string(i);
        m_tx[i].loadFromFile("slike/" + s + ".png");
    }
    for(unsigned int i = 1; i < m_tx_manji.size(); i++)
    {
        s = to_string(i);
        m_tx_manji[i].loadFromFile("slike/" + s + 'm' + ".png");
    }
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

}
void Izvlacenje::Draw(int i, sf::RenderWindow &m_window)
{
    switch(i)
    {
    case 0:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(420.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 1:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 2:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(620.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 3:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(720.0f,30.0f));
        m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 4:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(820.0f,30.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 5:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,100.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 6:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,200.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 7:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,300.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 8:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,400.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 9:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,500.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 10:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,600.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 11:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,700.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 12:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,800.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 13:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(80.0f,900.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 14:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(300.0f,700.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 15:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(300.0f,800.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 16:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(300.0f,900.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 17:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,700.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 18:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,800.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 19:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(520.0f,900.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 20:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(740.0f,700.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 21:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(740.0f,800.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 22:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(740.0f,900.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 23:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(960.0f,700.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 24:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(960.0f,800.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 25:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(960.0f,900.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 26:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,100.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 27:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,200.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 28:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,300.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 29:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,400.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 30:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,500.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 31:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,600.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 32:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,700.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 33:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,800.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    case 34:
        m_velikiBrojevi[i].setTexture(m_tx[m_moguciBrojevi[i]]);
        m_izvucenBroj[i].setPosition(sf::Vector2f(1150.0f,900.0f));
    m_izvucenBroj[i].setTexture(m_tx_manji[m_moguciBrojevi[i]]);
        break;
    }

    m_velikiBrojevi[i].setPosition(sf::Vector2f(400.0f, 130.0f));
    m_window.draw(m_izvucenBroj[i]);
}
void Izvlacenje::DrawVeliki(int i, sf::RenderWindow &window2)
{
    window2.draw(m_velikiBrojevi[i]);
}
std::string Izvlacenje::to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}
