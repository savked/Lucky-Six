#ifndef TEXTS_H
#define TEXTS_H

#include<SFML/Graphics.hpp>
#include<iostream>

class Texts
{
public:
    Texts();
    void DrawText(sf::RenderWindow &m_window);

private:
    sf::Text m_tx[35];
    sf::Font m_arial;
};

#endif // TEXTS_H
