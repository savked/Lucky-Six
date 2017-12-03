#include "Tiketi.h"

Tiketi::Tiketi()
{
    m_txBox.loadFromFile("slike/box.png");
    m_uplatiTx.loadFromFile("slike/uplati.png");

    m_uplatiBox.setTexture(m_uplatiTx);
    m_uplatiBox.setPosition(sf::Vector2f(450.0f, 920.0f));

    m_lopticeTx.resize(49);
    for(unsigned i = 1; i < m_lopticeTx.size(); i++)
    {
        s = to_string(i);
        m_lopticeTx[i].loadFromFile("slike/" + s + 'm' + ".png");
    }
    m_brojeviZaBiranje.resize(49);
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
        m_brojeviZaBiranje[i].setTexture(m_lopticeTx[i]);

    // setting up the empty circles
    m_body.resize(6);
    for(unsigned int i = 0; i < m_body.size(); i++)
    {
        m_body[i].setRadius(30.0f);
        m_body[i].setFillColor(sf::Color(128,128,128,200));
        m_body[i].setOutlineColor(sf::Color(210,210,210, 255));
        m_body[i].setOutlineThickness(2.0f);

        if(i == 0)
            m_body[i].setPosition(sf::Vector2f(350.0f, 250.0f));
        else
            m_body[i].setPosition(sf::Vector2f(m_body[i-1].getPosition().x + 100, m_body[i-1].getPosition().y));
    }

    setBrojeve();

    m_font.loadFromFile("fonts/arial.ttf");

    m_imenaBox.setTexture(m_txBox);
    m_ulogBox.setTexture(m_txBox);

    m_txtImena.setFont(m_font);
    m_txtUlog.setFont(m_font);

    m_enteredIme.setFont(m_font);
    m_enteredUlog.setFont(m_font);

    m_imenaBox.setPosition(sf::Vector2f(200.0f, 100.0f));
    m_ulogBox.setPosition(sf::Vector2f(700.0f, 100.0f));

    m_txtImena.setPosition(sf::Vector2f(340.0f, 50.0f));
    m_txtUlog.setPosition(sf::Vector2f(840.0f, 50.0f));

    m_txtImena.setString("Ime");
    m_txtUlog.setString("Ulog");
}
void Tiketi::Winnings()
{
    /*srand(time(0));

    std::vector<int> brojevi;
	std::vector<int> izvuceniBrojevi;
	std::vector<int> kvote;

	long int dobitak = 0;
	int ulog = 0;

	brojevi.resize(6);
	izvuceniBrojevi.resize(48);
	kvote.resize(30);

    /// INITIALIZING RANDOM NUMBERS

	int j = 1;
	for(unsigned int i = 0; i < izvuceniBrojevi.size(); i++)
    {
        izvuceniBrojevi[i] = j;

        j++;
    }

    izvuceniBrojevi.resize(35);

    //std::random_shuffle(izvuceniBrojevi.begin(), izvuceniBrojevi.end());

    /// KVOTE
    kvote[0] = 10000;
    kvote[1] = 7500;
    kvote[2] = 5000;
    kvote[3] = 2500;
    kvote[4] = 1000;
    kvote[5] = 500;
    kvote[6] = 300;
    kvote[7] = 200;
    kvote[8] = 150;
    kvote[9] = 100;
    kvote[10] = 90;
    kvote[11] = 80;
    kvote[12] = 70;
    kvote[13] = 60;
    kvote[14] = 50;
    kvote[15] = 40;
    kvote[16] = 30;
    kvote[17] = 25;
    kvote[18] = 20;
    kvote[19] = 15;
    kvote[20] = 10;
    kvote[21] = 9;
    kvote[22] = 8;
    kvote[23] = 7;
    kvote[24] = 6;
    kvote[25] = 5;
    kvote[26] = 4;
    kvote[27] = 3;
    kvote[28] = 2;
    kvote[29] = 1;


    /// USER INPUT

    std::cout << "Unos: ";
	for(unsigned int i = 0; i < brojevi.size(); i++)
		std::cin >> brojevi[i];
    std::cout << "Ulog: ";

    std::cin >> ulog;

	std::cout << std::endl;

	std::cout << "Brojevi: ";

	for(unsigned int i = 0; i < brojevi.size(); i++)
		std::cout << brojevi[i] << " ";


	/// COMPARISON

	int counter = 0;

	for(unsigned int i = 0; i < brojevi.size(); i++)
    {
        for(unsigned int j = 0; j < izvuceniBrojevi.size(); j++)
        {
            if(brojevi[i] == izvuceniBrojevi[j])
            {
                counter++;
                if(counter == 6)
                {
                    dobitak = kvote[i - 5] * ulog;
                }
                else
                {
                    dobitak = -ulog;
                }
            }
        }
    }

    /// COUT RANDOM NUMBERS
    std::cout << std::endl;
    std::cout << "Izvuceni brojevi: ";
    std::cout << std::endl;
    for(unsigned int i = 0; i < izvuceniBrojevi.size(); i++)
    {
        std::cout << izvuceniBrojevi[i] << std::endl;
    }

    /// COUT NUMBER OF GUESSED
    std::cout << std::endl;
    std::cout <<     "POGODJENIH: ";
    std::cout << counter;

    /// COUT DOBITAK
    std::cout << std::endl;

    std::cout << "DOBITAK: " << dobitak; */
}
void Tiketi::setBrojeve()
{
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        if(i == 0)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(50.0f, 400.0f));
        else if(i > 0 && i <= 10)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 11)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 500.0f));
        else if(i > 11 && i <= 20)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 21)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 600.0f));
        else if(i > 21 && i <= 30)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 31)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(150.0f, 700.0f));
        else if(i > 31 && i <= 40)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
        else if(i == 41)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(250.0f, 800.0f));
        else if(i > 41 && i <= 48)
            m_brojeviZaBiranje[i].setPosition(sf::Vector2f(m_brojeviZaBiranje[i-1].getPosition().x + 100, m_brojeviZaBiranje[i-1].getPosition().y));
    }
}
void Tiketi::clickedOnNumber(sf::Event &event)
{
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        if(event.type == sf::Event::MouseButtonPressed)
            if(event.mouseButton.button == sf::Mouse::Left)
                if(m_brojeviZaBiranje[i].getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
                {
                    switch(m_counter)
                    {
                    case 0:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(350.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 1:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(450.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 2:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(550.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 3:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(650.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 4:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(750.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    case 5:
                        m_brojeviZaBiranje[i].setPosition(sf::Vector2f(850.0f, 250.0f));
                        m_brojevi[counterI] = i;
                        counterI++;
                        break;
                    }
                    m_counter++;
                    if(m_counter > 6)
                        m_counter = 0;
                }
    }
}
void Tiketi::uplatiClicked(sf::Event &event)
{
    m_brojevi.resize(50);
    m_imena.resize(50);
    m_ulog.resize(50);
    if(event.type == sf::Event::MouseButtonPressed)
        if(event.mouseButton.button == sf::Mouse::Left)
            if(m_uplatiBox.getGlobalBounds().contains(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y))
            {
                m_imena[asd] = str1;
                m_ulog[asd] = atoi(str2.c_str());

                asd++;
                Ispis();
                flagLista = 1;
                // reset everything to default
                setBrojeve();
                flag = 0;
                str1 = "";
                m_enteredIme.setString("");
                str2 = "";
                m_enteredUlog.setString("");
            }
}
void Tiketi::Ispis()
{
    //ispis imena i uloge
    for(unsigned int i = 0; i < m_imena.size(); i++)
    {
        if(m_imena[i] != "0")
            std::cout << m_imena[i] << std::endl;
        if(m_ulog[i] != 0)
            std::cout << m_ulog[i] << std::endl;
    }
    // ispis brojeva
    for(unsigned int i = 0; i < m_brojevi.size(); i++)
    {
        if(m_brojevi[i] != 0)
            std::cout << m_brojevi[i] << std::endl;
    }
}
void Tiketi::unosImena(sf::Event &event)
{
    if(flag == 0)
    {
        m_enteredIme.setPosition(sf::Vector2f(210.0f, 105.0f));
        if (event.type == sf::Event::TextEntered)
        {
            if(event.text.unicode == '\b' && str1.size() != 0)
            {
                str1.erase(str1.size() - 1, 1);
                m_enteredIme.setString(str1);
            }
            else if (event.text.unicode < 128)
            {
                str1 += static_cast<char>(event.text.unicode);
                m_enteredIme.setString(str1);
            }
            // ako se pritsine enter
            if(event.text.unicode == 13)
            {
                str1.erase(str1.size() - 1, 1);
                m_enteredIme.setString(str1);
                flag = 1;
            }
        }
    }
}
void Tiketi::unosUloga(sf::Event &event)
{
    if(flag == 1)
    {
        m_enteredUlog.setPosition(sf::Vector2f(710.0f, 105.0f));
        if (event.type == sf::Event::TextEntered)
        {
            if(event.text.unicode == '\b' && str2.size() != 0)
            {
                str2.erase(str2.size() - 1, 1);
                m_enteredUlog.setString(str2);
            }
            else if(event.text.unicode < 128)
            {
                str2 += static_cast<char>(event.text.unicode);
                m_enteredUlog.setString(str2);
            }
            // ako se pritisne enter ubacuje sve u vektore
            if(event.text.unicode == 13)
            {
                str2.erase(str2.size() - 1, 1);
                m_enteredUlog.setString(str2);
            }
        }
    }
}
void Tiketi::PressedEscape(int &startFlag)
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        startFlag = 4;
}
void Tiketi::Draw(sf::RenderWindow &m_window)
{
    // drawing empty circles
    for(unsigned int i = 0; i < m_body.size(); i++)
    {
        m_window.draw(m_body[i]);
    }
    // draw numbers
    for(unsigned int i = 0; i < m_brojeviZaBiranje.size(); i++)
    {
        m_window.draw(m_brojeviZaBiranje[i]);
    }
    m_window.draw(m_imenaBox);
    m_window.draw(m_ulogBox);
    m_window.draw(m_uplatiBox);

    m_window.draw(m_txtImena);
    m_window.draw(m_txtUlog);

    m_window.draw(m_enteredIme);
    m_window.draw(m_enteredUlog);
}
