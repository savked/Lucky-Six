#include "PocetniEkran.h"

PocetniEkran::PocetniEkran()
{
    m_box_tx.loadFromFile("slike/box.png");
    m_box.setTexture(m_box_tx);

    m_ft.loadFromFile("fonts/arial.ttf");
    m_pwText.setFont(m_ft);
    m_enteredText.setFont(m_ft);

    m_pwText.setString("Ukucaj password da bi pristupio programu"); // Enter password to get access
    m_pwText.setPosition(sf::Vector2f(350.0f, 340.0f));

    m_box.setPosition(sf::Vector2f(450.0f, 400.0f));
    m_box.setColor(sf::Color::White);
}
void PocetniEkran::Draw(sf::RenderWindow &m_window)
{
    m_window.draw(m_enteredText);
    m_window.draw(m_box);
    m_window.draw(m_pwText);
}
