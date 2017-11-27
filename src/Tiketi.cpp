#include "Tiketi.h"

Tiketi::Tiketi()
{
    m_font.loadFromFile("fonts/arial.ttf");

    m_timerTxt.setFont(m_font);
    m_timerTxt.setPosition(sf::Vector2f(470.0f, 350.0f));
    m_timerTxt.setFillColor(sf::Color::Green);
    m_timerTxt.setString("Do pocetka sledeceg kola");

    m_timerText.setFont(m_font);
    m_timerText.setPosition(sf::Vector2f(600.0f, 400.0f));
    m_timerText.setFillColor(sf::Color::White);

    m_txBox.loadFromFile("slike/box2.png");
    m_noviTiket.setTexture(m_txBox);

    m_noviTiket.setPosition(sf::Vector2f(470.0f, 500.0f));


}
void Tiketi::povecaj()
{
    if(m_minuti == 0 && m_sekunde == 0)
    {
        m_timerText.setString("00:00");
    }
    else
    {
        //Sleep(1000);
        m_sekunde--;
    }

    if(m_sekunde < 0)
    {
        m_sekunde = 59;

        m_minuti--;
    }
    if(m_sekunde < 10)
    {
        m_timerText.setString(nula + to_string(m_minuti) + ":" + nula + to_string(m_sekunde));
    }
    else
        m_timerText.setString(nula + to_string(m_minuti) + ":" + to_string(m_sekunde));
}
std::string Tiketi::to_string(int i)
{
    std::stringstream ss;
    ss << i;
    return ss.str();
}
void Tiketi::Draw(sf::RenderWindow &m_window)
{
    povecaj();
    m_window.draw(m_noviTiket);
    m_window.draw(m_timerTxt);
    m_window.draw(m_timerText);
}
void Tiketi::timerDone(int &flag)
{
    if(m_minuti == 0 && m_sekunde == 0)
    {
        flag = 1;
    }
}
