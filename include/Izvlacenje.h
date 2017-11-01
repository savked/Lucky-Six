#ifndef IZVLACENJE_H
#define IZVLACENJE_H

#include<string>
#include<cstdlib>
#include<sstream>
#include<iostream>
#include<SFML/Graphics.hpp>

class Izvlacenje
{
public:
    Izvlacenje();

    //void Animacija();
    void Draw(sf::RenderWindow &m_window);
    std::string to_string(int i);

private:
    std::string s;
    sf::Texture m_tx[48];
    sf::Sprite m_izvucenBroj;
    //red,green,blue,purple,brown,yellow, orange, gray
};

#endif // IZVLACENJE_H
