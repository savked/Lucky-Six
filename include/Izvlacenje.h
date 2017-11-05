#ifndef IZVLACENJE_H
#define IZVLACENJE_H

#include<string>
#include<cstdlib>
#include<stack>
#include<algorithm>
#include<sstream>
#include<iostream>
#include<SFML/Graphics.hpp>

class Izvlacenje
{
public:
    Izvlacenje();

    void Animacija(sf::RenderWindow &m_window);
    //void Timer();


    std::string to_string(int i);

private:
    std::string s;
    std::vector<int> m_moguciBrojevi;

    sf::Texture m_tx[48]; // vece teksture
    std::vector<sf::Sprite> m_izvucenBroj;

    //red,green,blue,purple,brown,yellow, orange, gray


    // ZA RELASE

    //bool m_counterDone = false;
    //sf::Text m_counterMin, m_counterSec;

};

#endif // IZVLACENJE_H
