#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<SFML/Graphics.hpp>
void plusplus(int *z)
{
    srand(time(0));
    int a=rand()%16,sum=0;
    for(int i=0; i<16; i++)
        if(*(z+i))
            sum++;

    if(sum<16)
    {
        while(*(z+a)!=0)
        {
            a=rand()%16;
        }
        *(z+a)=*(z+a)+1;
    }

}
bool win(const int z[])
{
    bool sit=false;
    for(int i=0;i<16;i++)
    {
        if(*(z+i)==1024)
            {
                sit=true;
                break;
            }
    }
    return sit;
}
void drawwin(sf::RenderWindow &window,int *gamestate,int *z)
{
    sf::Texture t;
    t.loadFromFile("image/win.png");
    sf::Sprite s(t);
    window.draw(s);
    sf::Event e;
    while(window.pollEvent(e))
    {
        if(e.type==sf::Event::KeyPressed)
        {
            for(int i=0;i<16;i++)
                *(z+i)=0;
                 srand(time(0));
            int a=rand()%16;
            *(z+a)=1;
            *gamestate=0;
        }
    }
}
bool lose(const int *z)
{
    bool sit=true;
    for(int i=0;i<16;i++)
    if(*(z+i)==0)
    {
        sit=false;
        break;
    }
    if(sit==true)
    {
        int x[6][6]={};
        for(int i=1;i<5;i++)
        {
            for(int j=1;j<5;j++)
            x[i][j]=z[4*(i-1)+j-1];
        }
        for(int i=1;i<5;i++)
        {
            for(int j=1;j<5;j++)
            {
                if(x[i][j]==x[i][j+1])
                {
                    sit=false;
                    break;
                }
                 if(x[i][j]==x[i][j-1])
                {
                    sit=false;
                    break;
                }
                 if(x[i][j]==x[i+1][j])
                {
                    sit=false;
                    break;
                }
                 if(x[i][j]==x[i-1][j])
                {
                    sit=false;
                    break;
                }

            }
        }
    }
    return sit;
}
void drawlose(sf::RenderWindow &window,int *gamestate,int *z)
{
    sf::Texture t;
    t.loadFromFile("image/lose.png");
    sf::Sprite s(t);
    window.draw(s);
    sf::Event e;
    while(window.pollEvent(e))
    {
        if(e.type==sf::Event::KeyPressed)
        {
            for(int i=0;i<16;i++)
                *(z+i)=0;
            srand(time(0));
            int a=rand()%16;
            *(z+a)=1;
         *gamestate=0;
        }
    }
}
