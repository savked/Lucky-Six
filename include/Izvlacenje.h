#ifndef IZVLACENJE_H
#define IZVLACENJE_H

#include<Loptica.h>
#include<string>
#include<sstream>
#include<iostream>
#include<SFML/Graphics.hpp>

class Izvlacenje : private Loptica
{
public:
    Izvlacenje();
    void Draw(sf::RenderWindow &m_window);

    std::string to_string(int i)
    {
        std::stringstream ss;
        ss << i;
        return ss.str();
    }

private:
    std::string s;
    sf::Texture m_tx[48];
    sf::Sprite m_brojevi[48];
    //red,green,blue,purple,brown,yellow, orange, gray
};

#endif // IZVLACENJE_H
