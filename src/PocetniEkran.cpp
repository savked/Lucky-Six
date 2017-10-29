#include "PocetniEkran.h"

PocetniEkran::PocetniEkran()
{
    m_rect.setScale(sf::Vector2f(20.0f, 10.0f));
    m_rect.setFillColor(sf::Color::Red);
    m_rect.setOutlineColor(sf::Color::White);
    m_rect.setOutlineThickness(1.0f);
}
void PocetniEkran::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_rect);
}
