#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

#include<Tiketi.h>

class Lista : private Tiketi
{
public:
    Lista();
    void Draw(sf::RenderWindow &m_window);

private:
    std::vector<sf::RectangleShape> m_lines;
    std::vector<sf::Text> m_imenaTxt;
    std::vector<sf::Text> m_ulogTxt;

    std::vector<sf::Text> m_brojeviTxt;
};
