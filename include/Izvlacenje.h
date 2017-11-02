#ifndef IZVLACENJE_H
#define IZVLACENJE_H

#include<string>
#include<cstdlib>
#include<windows.h>
#include<sstream>
#include<iostream>
#include<SFML/Graphics.hpp>

class Izvlacenje
{
public:
    Izvlacenje();

    void Animacija();
    void Timer();
    void Draw(sf::RenderWindow &m_window);
    std::string to_string(int i);

private:
    std::string s;
    sf::Texture m_tx[48]; // vece teksture
    sf::Sprite m_izvucenBroj[48];
    //red,green,blue,purple,brown,yellow, orange, gray


    // ZA RELASE

    //bool m_counterDone = false;
    //sf::Text m_counterMin, m_counterSec;

};

#endif // IZVLACENJE_H
