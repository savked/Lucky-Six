#pragma once

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
    void Draw(int i, sf::RenderWindow &m_window);
    void DrawVeliki(int i, sf::RenderWindow &window2);
    std::string to_string(int i);

private:
    std::string s;
    std::vector<int> m_moguciBrojevi;

    std::vector<sf::Sprite> m_izvucenBroj;
    std::vector<sf::Sprite> m_velikiBrojevi;

    std::vector<sf::Texture> m_tx; // textures for numbers
    std::vector<sf::Texture> m_tx_manji;

    //red,green,blue,purple,brown,yellow, orange, gray


    // ZA RELASE

    //bool m_counterDone = false;
    //sf::Text m_counterMin, m_counterSec;

};
