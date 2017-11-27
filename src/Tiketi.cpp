#include "Tiketi.h"

Tiketi::Tiketi()
{
    m_font.loadFromFile("fonts/arial.ttf");

    m_timerText.setFont(m_font);
    m_timerText.setScale(sf::Vector2f(1.5f, 1.5f));
    m_timerText.setPosition(sf::Vector2f(sf::VideoMode::getDesktopMode().width / 2, sf::VideoMode::getDesktopMode().height / 2));
    m_timerText.setFillColor(sf::Color::White);
}
void Tiketi::povecaj()
{
    if(m_minuti == 0 && m_sekunde == 0)
    {
        m_timerText.setString("00:00");
    }
    else
    {
        Sleep(1000);
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
    m_window.draw(m_timerText);
}
