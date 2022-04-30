#include <SFML/Graphics.hpp>
#include <time.h>
#include "../headers/tetramino.h"

int main(){

    sf::RenderWindow window(sf::VideoMode(320, 680), "The Tetris!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)){

            if (event.type == sf::Event::Closed)   window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}

