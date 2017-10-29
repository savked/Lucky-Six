#ifndef POCETNIEKRAN_H
#define POCETNIEKRAN_H

#include<SFML/Graphics.hpp>

class PocetniEkran
{
public:
    PocetniEkran();
    void Draw(sf::RenderWindow &m_window);

private:
    sf::RectangleShape m_rect;
};

#endif // POCETNIEKRAN_H
