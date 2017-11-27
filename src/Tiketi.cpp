#include "Tiketi.h"

Tiketi::Tiketi()
{
    m_txBox.loadFromFile("slike/box.png");
    m_imenaBox.setTexture(m_txBox);

    m_imenaBox.setPosition(sf::Vector2f(200.0f,200.0f));
}
void Tiketi::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_imenaBox);
}
