// Projet_SFML.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include<ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "SFML\System.hpp"
#include "SFML\Window.hpp"

int MoveSpeed{ 8 }; 
static sf::Clock dtCLock; 
float dt; 


void UpdateDt() 
{
    dt = dtCLock.getElapsedTime().asSeconds(); 
}
int main()
{
    sf::RenderWindow window(sf::VideoMode(900, 900), "SFML works!");
    sf::RectangleShape shape(sf::Vector2f(120, 120)); 
    shape.setFillColor(sf::Color::Green);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            ; 
            if (event.type == sf::Event::Closed)
                window.close();
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Z)) 
        {   
            sf::RectangleShape shape2(sf::Vector2f(500, 600));
            shape2.setFillColor(sf::Color::Red);
            shape.setPosition(sf::Vector2f(0, MoveSpeed * dt)); 
        }
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

