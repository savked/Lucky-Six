#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
#include<sstream>
#include<windows.h>
#include<Tiketi.h>

class Timer
{
public:
    Timer();
    void povecaj();
    void timerDone(int &flag);
    std::string to_string(int i);
    void Draw(sf::RenderWindow &m_window);
    void clickedOnTicket(sf::Event &m_event, int &flag);

private:
    sf::Font m_font;
    sf::Text m_timerText;

    sf::Sprite m_noviTiket;
    sf::Texture m_txBox;

    char nula = '0';
    int m_minuti = 5;
    int m_sekunde = 59;

    int pausedMin;
    int pausedSek;

    sf::Text m_timerTxt;
};
