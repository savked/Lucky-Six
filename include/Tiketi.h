#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>

#include<Izvlacenje.h>

class Tiketi : public Izvlacenje
{
public:
    Tiketi();
    void Draw(sf::RenderWindow &m_window);
    void unosImena(sf::Event &event);
    //void unosBrojeva(sf::Event &event);
    void unosUloga(sf::Event &event);
    void setBrojeve();

private:
    std::vector<std::string> m_imena;
    std::vector<int> m_brojevi;
    std::vector<int> m_ulog;
    std::vector<sf::Sprite> m_brojeviZaBiranje;

    sf::Texture m_txBox;
    std::vector<sf::Texture> m_lopticeTx;

    sf::Sprite m_imenaBox;
    //sf::Sprite m_brojeviBox;
    sf::Sprite m_ulogBox;

    sf::Font m_font;

    sf::Text m_txtImena;
    //sf::Text m_txtBrojevi;
    sf::Text m_txtUlog;
    sf::Text m_enteredIme;
    //sf::Text m_enteredBrojevi;
    sf::Text m_enteredUlog;

    std::string str1;
    //std::string str2;
    std::string str3;
    std::string s;

    int flag = 0;
};
