#ifndef POCETNIEKRAN_H
#define POCETNIEKRAN_H

#include<SFML/Graphics.hpp>
#include<iostream>

class PocetniEkran
{
public:
    PocetniEkran();
    void Draw(sf::RenderWindow &m_window);
    int gameAccess(sf::Event &event, int &tokIgre);

private:
    sf::Event event;
    std::string str;

    int m_flag = 1;

    sf::Texture m_box_tx;

    sf::Text m_pwText;
    sf::Text m_enteredText;

    sf::Font m_ft;
    sf::Sprite m_box;

    sf::CircleShape m_cs;
};

#endif // POCETNIEKRAN_H
