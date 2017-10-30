#ifndef LOPTICA_H
#define LOPTICA_H

#include<iostream>
#include<cstdlib>
#include<ctime>

#include<SFML/Graphics.hpp>
#include<Texts.h>

class Loptica
{
public:
    Loptica();
    void Draw(sf::RenderWindow &m_window);

    void RandomDet(sf::Sprite &d1, sf::Sprite &d2);

private:
    sf::CircleShape m_body[35];

    sf::Texture m_txD;

    sf::Sprite m_detelina1;
    sf::Sprite m_detelina2;
};

#endif // LOPTICA_H
