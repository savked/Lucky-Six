#ifndef POCETNIEKRAN_H
#define POCETNIEKRAN_H

#include<SFML/Graphics.hpp>
#include<iostream>

class PocetniEkran
{
public:
    PocetniEkran();
    void Draw(sf::RenderWindow &m_window);

private:
    sf::Texture m_box_tx;
    sf::Text m_pwText;
    sf::Text m_enteredText;
    sf::Font m_ft;
    sf::Sprite m_box;
};

#endif // POCETNIEKRAN_H
