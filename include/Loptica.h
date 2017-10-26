#ifndef LOPTICA_H
#define LOPTICA_H

#include<iostream>
#include<SFML/Graphics.hpp>
#include "Texts.h"

class Loptica
{
public:
    Loptica();
    void Draw(sf::RenderWindow &m_window);

private:
    sf::CircleShape m_body[35];
};

#endif // LOPTICA_H
