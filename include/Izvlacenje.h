#ifndef IZVLACENJE_H
#define IZVLACENJE_H

#include<Loptica.h>
#include<SFML/Graphics.hpp>

class Izvlacenje : private Loptica
{
public:
    Izvlacenje();
    void Draw(sf::RenderWindow &m_window);

private:
    sf::CircleShape m_izvucenBroj;
    sf::Font m_arial;
    sf::Text m_broj;
    //red,green,blue,purple,brown,yellow, orange, gray(black)
};

#endif // IZVLACENJE_H
