#include "Loptica.h"

Loptica::Loptica()
{
    m_txD.loadFromFile("slike/detelina.png");

    m_detelina1.setTexture(m_txD);
    m_detelina2.setTexture(m_txD);

    RandomDet(m_detelina1, m_detelina2);

    m_body.resize(35);

    for(unsigned int i = 0; i < m_body.size(); i++)
    {
        m_body[i].setRadius(30.0f);
        m_body[i].setFillColor(sf::Color(128,128,128,200));
        m_body[i].setOutlineColor(sf::Color(210,210,210, 255));
        m_body[i].setOutlineThickness(2.0f);

        // PRVIH 6
        if(i == 0)
            m_body[i].setPosition(sf::Vector2f(420.0f,30.0f));
        else if(i > 0 && i <= 4)
            m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 100.0f,m_body[i-1].getPosition().y));
        /////
        else if(i == 5)
        {
            m_body[i].setPosition(sf::Vector2f(80.0f, 100.0f));
        }
        else if(i > 5 && i <= 13)
        {
            m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x,m_body[i-1].getPosition().y + 100.0f));
        }
        else if(i > 13 && i <= 25)
        {
            if(i == 14 || i == 17 || i == 20 || i == 23)
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 220.0f, 700.0f));
            else
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x, m_body[i-1].getPosition().y + 100.0f));
        }
        else if(i > 25 && i <= 35)
        {
            if(i == 26)
                m_body[i].setPosition(sf::Vector2f(1150.0f,100.0f));
            else
                m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x, m_body[i-1].getPosition().y + 100.0f));
        }
    }
}
void Loptica::RandomDet(sf::Sprite &d1, sf::Sprite &d2)
{
    srand(time(NULL));

    int rd1 = rand() % 30;
    int rd2 = rand() % 30;

    sf::Vector2f pozicije[30];

    sf::Vector2f pos1(85.0f, 102.0f);
    sf::Vector2f pos2(85.0f, 202.0f);
    sf::Vector2f pos3(85.0f, 302.0f);
    sf::Vector2f pos4(85.0f, 402.0f);
    sf::Vector2f pos5(85.0f, 502.0f);
    sf::Vector2f pos6(85.0f, 602.0f);
    sf::Vector2f pos7(85.0f, 702.0f);
    sf::Vector2f pos8(85.0f, 802.0f);
    sf::Vector2f pos9(85.0f, 902.0f);

    sf::Vector2f pos10(305.0f, 702.0f);
    sf::Vector2f pos11(305.0f, 802.0f);
    sf::Vector2f pos12(305.0f, 902.0f);

    sf::Vector2f pos13(525.0f, 702.0f);
    sf::Vector2f pos14(525.0f, 802.0f);
    sf::Vector2f pos15(525.0f, 902.0f);

    sf::Vector2f pos16(745.0f, 702.0f);
    sf::Vector2f pos17(745.0f, 802.0f);
    sf::Vector2f pos18(745.0f, 902.0f);

    sf::Vector2f pos19(85.0f, 702.0f);
    sf::Vector2f pos20(85.0f, 802.0f);
    sf::Vector2f pos21(85.0f, 902.0f);

    sf::Vector2f pos22(1155.0f, 102.0f);
    sf::Vector2f pos23(1155.0f, 202.0f);
    sf::Vector2f pos24(1155.0f, 302.0f);
    sf::Vector2f pos25(1155.0f, 402.0f);
    sf::Vector2f pos26(1155.0f, 502.0f);
    sf::Vector2f pos27(1155.0f, 602.0f);
    sf::Vector2f pos28(1155.0f, 702.0f);
    sf::Vector2f pos29(1155.0f, 802.0f);
    sf::Vector2f pos30(1155.0f, 902.0f);

    pozicije[0] = pos1;
    pozicije[1] = pos2;
    pozicije[2] = pos3;
    pozicije[3] = pos4;
    pozicije[4] = pos5;
    pozicije[5] = pos6;
    pozicije[6] = pos7;
    pozicije[7] = pos8;
    pozicije[8] = pos9;
    pozicije[9] = pos10;
    pozicije[10] = pos11;
    pozicije[11] = pos12;
    pozicije[12] = pos13;
    pozicije[13] = pos14;
    pozicije[14] = pos15;
    pozicije[15] = pos16;
    pozicije[16] = pos17;
    pozicije[17] = pos18;
    pozicije[18] = pos19;
    pozicije[19] = pos20;
    pozicije[20] = pos21;
    pozicije[21] = pos22;
    pozicije[22] = pos23;
    pozicije[23] = pos24;
    pozicije[24] = pos25;
    pozicije[25] = pos26;
    pozicije[26] = pos27;
    pozicije[27] = pos28;
    pozicije[28] = pos29;
    pozicije[29] = pos30;

    d1.setPosition(pozicije[rd1]);
    d2.setPosition(pozicije[rd2]);
}
void Loptica::Draw(sf::RenderWindow &m_window)
{

    for(int i = 0; i < 35; i++)
    {
        m_window.draw(m_body[i]);
        Texts odds;
        odds.DrawText(m_window);
    }

    m_window.draw(m_detelina1);
    m_window.draw(m_detelina2);
}
