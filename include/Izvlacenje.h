#ifndef IZVLACENJE_H
#define IZVLACENJE_H

#include<string>
#include<cstdlib>
#include<stack>
#include<ctime>
#include<algorithm>
#include<sstream>
#include<windows.h>
#include<iostream>

#include<Loptica.h>
#include<SFML/Graphics.hpp>

class Izvlacenje : public Loptica
{
public:
    Izvlacenje();
    void Animacija(sf::RenderWindow &m_window);
    std::string to_string(int i);

private:
    std::string s;
    std::vector<int> m_moguciBrojevi;

    std::vector<sf::Sprite> m_izvucenBroj;
    std::vector<sf::Sprite> m_velikiBrojevi;

    std::vector<sf::Texture> m_tx; // textures for numbers

    //red,green,blue,purple,brown,yellow, orange, gray


    // ZA RELASE

    //bool m_counterDone = false;
    //sf::Text m_counterMin, m_counterSec;

};

#endif // IZVLACENJE_H
