#include "Izvlacenje.h"

Izvlacenje::Izvlacenje()
{
    m_arial.loadFromFile("fonts/arial.ttf");

    m_broj.setFont(m_arial);
    m_broj.setColor(sf::Color::Black);
    m_broj.setScale(10.0f, 10.0f);
    m_broj.setPosition(400.0f, 150.0f);

    m_izvucenBroj.setRadius(250.0f);
    m_izvucenBroj.setPosition(sf::Vector2f(400.0f, 150.0f));
    m_izvucenBroj.setFillColor(sf::Color::White);
    m_izvucenBroj.setOutlineColor(sf::Color::Green); // nek bude boja koja ce se izvuci bez broja, za sada bela
    m_izvucenBroj.setOutlineThickness(50.0f);
}
void Izvlacenje::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_broj);
    m_window.draw(m_izvucenBroj);
}
