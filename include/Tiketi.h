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
    void unosUloga(sf::Event &event);
    void clickedOnNumber(sf::Event &event);
    void uplatiClicked(sf::Event &event);
    void setBrojeve();

    void Ispis();

private:
    std::vector<std::string> m_imena;
    std::vector<int> m_brojevi;
    std::vector<int> m_ulog;
    std::vector<sf::Sprite> m_brojeviZaBiranje;
    std::vector<sf::CircleShape> m_body;

    int tempBrojevi[6];

    int m_counter = 0;
    int j = 0;

    sf::Texture m_txBox;
    sf::Texture m_uplatiTx;
    std::vector<sf::Texture> m_lopticeTx;

    sf::Sprite m_imenaBox;
    sf::Sprite m_ulogBox;
    sf::Sprite m_uplatiBox;

    sf::Font m_font;

    sf::Text m_txtImena;
    sf::Text m_txtUlog;
    sf::Text m_enteredIme;
    sf::Text m_enteredUlog;

    std::string str1;
    std::string str2;
    std::string s;

    int flag = 0;
};
