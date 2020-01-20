#pragma once
#include<SFML/Graphics.hpp>
class Menu
    {
    public:
        Menu(void);
        void draw(sf::RenderWindow &window,int i);
    private:
        int choice;
        sf::Sprite sprite;
        sf::Texture t0;
        sf::Texture t1;
        sf::Texture t2;
        sf::Texture t3;
    };
