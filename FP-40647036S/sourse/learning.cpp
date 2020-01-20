#include<SFML/Graphics.hpp>
void learn(sf::RenderWindow &window,int *gamestate)
{
    sf::Texture test;
    test.loadFromFile("image/learn.png");
    sf::Sprite s(test);
    window.draw(s);
    sf::Event show;
    sf::Vector2i pos;
    pos=sf::Mouse::getPosition(window);
    while(window.pollEvent(show))
    {
        if(pos.x>30&&pos.x<110&&pos.y<560&&pos.y>510)
        {
            if(show.type==sf::Event::MouseButtonPressed)
            *gamestate=0;
        }
    }
}

