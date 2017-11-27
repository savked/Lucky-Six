#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#include<sstream>
#include<windows.h>

class Tiketi
{
public:
    Tiketi();
    void povecaj();
    std::string to_string(int i);
    void Draw(sf::RenderWindow &m_window);

private:
    sf::Font m_font;
    sf::Text m_timerText;

    sf::Sprite m_noviTiket;
    sf::Texture m_txBox;

    char nula = '0';
    int m_minuti = 5;
    int m_sekunde = 59;

    sf::Text m_timerTxt;
};
