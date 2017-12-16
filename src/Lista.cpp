#include "Lista.h"

Lista::Lista()
{
    m_lines.resize(5);
    m_imenaTxt.resize(m_imena.size());
    m_ulogTxt.resize(m_ulog.size());

    for(unsigned int i = 0; i < m_imenaTxt.size(); i++)
    {
        m_imenaTxt[i].setFont(m_font);
        m_ulogTxt[i].setFont(m_font);

        m_ulogTxt[i].setString(to_string(m_ulog[0]));
    }

    for(unsigned int i = 0; i < m_brojeviTxt.size(); i++)
        m_brojeviTxt[i].setFont(m_font);

    for(unsigned int i = 0; i < m_lines.size(); i++)
    {
        m_lines[i].setSize(sf::Vector2f(sf::VideoMode::getDesktopMode().width, 2.5f));
        m_lines[i].setFillColor(sf::Color::White);
        m_lines[i].setPosition(sf::Vector2f(0.0f, 75.0f));
    }
    // getting names to vector
    for(unsigned int i = 0; i < m_imenaTxt.size(); i++)
    {
        m_imenaTxt[i].setString(m_imena[i]);
        m_imenaTxt[i].setPosition(sf::Vector2f(100.0f, 100.0f));
    }
}
void Lista::Draw(sf::RenderWindow &m_window)
{
    for(unsigned int i = 0; i < m_lines.size(); i++)
    {
        m_window.draw(m_lines[i]);
    }
    for(unsigned int i = 0; i < m_imenaTxt.size(); i++)
    {
        m_window.draw(m_imenaTxt[i]);
        m_window.draw(m_ulogTxt[i]);
    }
}
