#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

class Tiketi
{
public:
    Tiketi();
    void Draw(sf::RenderWindow &m_window);

private:
    sf::Texture m_txBox;
    sf::Sprite m_imenaBox;

    std::vector<std::string> imena;
    std::vector<std::vector<int>> brojevi;

};
