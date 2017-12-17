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
    void backClicked(sf::Event &event, int &startFlag);

    void setBrojeve();
    void Ispis();

protected:
    std::vector<sf::String> m_imena;
    std::vector<int> m_brojevi;
    std::vector<int> m_ulog;

    sf::Font m_font;
    int flagLista = 0;

private:
    std::vector<sf::Texture> m_lopticeTx;
    std::vector<sf::Sprite> m_brojeviZaBiranje;
    std::vector<int> alreadyClicked;

    int flag = 0;
    int tempJ = 0;
    int m_counter = 0;
    int asd = 0;
    int counterI = 0;


    sf::Texture m_txBox;
    sf::Texture m_uplatiTx;
    sf::Texture m_backTx;

    sf::Sprite m_imenaBox;
    sf::Sprite m_ulogBox;
    sf::Sprite m_uplatiBox;
    sf::Sprite m_back;


    sf::Text m_txtImena;
    sf::Text m_txtUlog;
    sf::Text m_enteredIme;
    sf::Text m_enteredUlog;

    std::string str1;
    std::string str2;
    std::string s;

};
