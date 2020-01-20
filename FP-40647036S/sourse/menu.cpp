#include"menu.hpp"
#include<stdio.h>
Menu::Menu()
{
    if(!t0.loadFromFile("image/game menu.png"))
    {

    }
     if(!t1.loadFromFile("image/game menu1.png"))
    {

    }
     if(!t2.loadFromFile("image/game menu2.png"))
    {

    }
     if(!t3.loadFromFile("image/game menu3.png"))
    {

    }
}

void Menu::draw(sf::RenderWindow &window,int i)
{
        switch (i)
    {
    case 0:
        sprite.setTexture(t0);
        break;
    case 1:
        sprite.setTexture(t1);
        break;
    case 2:
        sprite.setTexture(t2);
        break;
    case 3:
        sprite.setTexture(t3);
        break;
    }
    window.draw(sprite);
}
