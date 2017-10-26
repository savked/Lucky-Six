#ifndef LOPTICA_H
#define LOPTICA_H

#include<iostream>
#include<SFML/Graphics.hpp>

class Loptica
{
public:
    Loptica();
    void Draw(sf::RenderWindow &m_window);

private:
    sf::CircleShape m_body[35];
    sf::Text m_tx[35];
    sf::Font m_ft;

};

#endif // LOPTICA_H
