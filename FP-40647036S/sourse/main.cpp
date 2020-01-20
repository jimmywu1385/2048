#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include "menu.hpp"
#include"learning.hpp"
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include"gamef.hpp"
#include"showmetric.hpp"
int main()
{
    int z[4][4]= {};
    srand(time(NULL));
    z[rand()%4][rand()%4]=1;
    sf::RenderWindow window(sf::VideoMode(700,600), "2048!",sf::Style::Close);
    Menu option;
    showmetric fuck;
    int menuoption=0,gamestate=0;
    while (window.isOpen())
    {
        sf::Vector2i pos;
        pos=sf::Mouse::getPosition(window);
        sf::Event event;
        while (window.pollEvent(event))
        {
            if(event.type==sf::Event::Closed)
                window.close();
            if(gamestate==0)//selectmenu////////////////////////////////////////////////////////////////////////////////////////
            {
                if(pos.x>240&&pos.x<450)
                {
                    if(pos.y>260&&pos.y<350)
                    {
                        menuoption=1;
                        if(event.type==sf::Event::MouseButtonPressed)
                            gamestate=1;
                    }
                    else if(pos.y>360&&pos.y<440)
                    {
                        menuoption=2;
                        if(event.type==sf::Event::MouseButtonPressed)
                            gamestate=2;
                    }
                    else if(pos.y>450&&pos.y<550)
                    {
                        menuoption=3;
                        if(event.type==sf::Event::MouseButtonPressed)
                            window.close();
                    }
                    else
                        menuoption=0;
                }
                else
                    menuoption=0;
            }
            else if(gamestate==1)////////////////////////////control///////////////////////
            {
                if(event.type==sf::Event::KeyPressed)
                {
                    switch(event.key.code)
                    {
                    case sf::Keyboard::Left:{
                        bool pp1=false,ss1=false;
                        for(int i=0; i<4; i++)
                        {
                            ss1=false;
                            for(int j=0,sit=0; j<4; j++)
                            {
                                if(z[i][j]==0)
                                {
                                    ss1=true;
                                    continue;
                                }
                                if(ss1==true)
                                    pp1=true;
                                int x=z[i][sit];
                                z[i][sit]=z[i][j];
                                z[i][j]=x;
                                sit++;
                                if(sit>1)
                                {
                                    if(z[i][sit-2]==z[i][sit-1])
                                    {
                                        pp1=true;
                                        z[i][sit-2]*=2;
                                        z[i][sit-1]=0;
                                        sit--;
                                    }
                                }
                            }
                        }
                        if(pp1==true)
                        plusplus(&z[0][0]);
                        break;}
                    case sf::Keyboard::Right:{
                        bool pp2=false,ss2=false;
                        for(int i=0; i<4; i++)
                        {
                            ss2=false;
                            for(int j=3,sit=3; j>=0; j--)
                            {
                                if(z[i][j]==0)
                                {
                                    ss2=true;
                                    continue;
                                }
                                if(ss2==true)
                                    pp2=true;
                                int x=z[i][sit];
                                z[i][sit]=z[i][j];
                                z[i][j]=x;
                                sit--;
                                if(sit<2)
                                {
                                    if(z[i][sit+1]==z[i][sit+2])
                                    {
                                        pp2=true;
                                        z[i][sit+2]*=2;
                                        z[i][sit+1]=0;
                                        sit++;
                                    }
                                }
                            }
                        }
                        if(pp2==true)
                        plusplus(&z[0][0]);
                        break;}
                    case sf::Keyboard::Up:{
                        bool pp3=false,ss3=false;
                        for(int i=0; i<4; i++)
                        {
                            ss3=false;
                            for(int j=0,sit=0; j<4; j++)
                            {
                                if(z[j][i]==0)
                                {
                                    ss3=true;
                                    continue;
                                }
                                if(ss3==true)
                                    pp3=true;
                                int x=z[sit][i];
                                z[sit][i]=z[j][i];
                                z[j][i]=x;
                                sit++;
                                if(sit>1)
                                {
                                    if(z[sit-2][i]==z[sit-1][i])
                                    {
                                        pp3=true;
                                        z[sit-2][i]*=2;
                                        z[sit-1][i]=0;
                                        sit--;
                                    }
                                }
                            }
                        }
                        if(pp3==true)
                        plusplus(&z[0][0]);
                        break;}
                    case sf::Keyboard::Down:{
                        bool pp4=false,ss4=false;
                        for(int i=0; i<4; i++)
                        {
                            ss4=false;
                            for(int j=3,sit=3; j>=0; j--)
                            {
                                if(z[j][i]==0)
                                {
                                    ss4=true;
                                    continue;
                                }
                                if(ss4==true)
                                    pp4=true;
                                int x=z[sit][i];
                                z[sit][i]=z[j][i];
                                z[j][i]=x;
                                sit--;
                                if(sit<2)
                                {
                                    if(z[sit+1][i]==z[sit+2][i])
                                    {
                                        pp4=true;
                                        z[sit+2][i]*=2;
                                        z[sit+1][i]=0;
                                        sit++;
                                    }
                                }
                            }
                        }
                        if(pp4==true)
                        plusplus(&z[0][0]);
                        break;}
                    }

                for(int i=0;i<4;i++)
                {

                    for(int j=0;j<4;j++)
                        printf("%d",z[i][j]);
                    printf("\n");
                }
                printf("\n");
                }
            }//////////////////////////controlgame//////////////////////////////////////////
        }
        window.clear();////////////////////////draw///////////////////////////////////
        switch(gamestate)
        {
        case 0:
            switch(menuoption)
            {
            case 0:
                option.draw(window,0);
                break;
            case 1:
                option.draw(window,1);
                break;
            case 2:
                option.draw(window,2);
                break;
            case 3:
                option.draw(window,3);
                break;
            }
            break;
        case 1:
            fuck.draw(window,&z[0][0]);
            if(win(&z[0][0]))
                drawwin(window,&gamestate,&z[0][0]);
            if(lose(&z[0][0]))
                drawlose(window,&gamestate,&z[0][0]);
            break;
        case 2:
            learn(window,&gamestate);
            break;
        }
        window.display();
    }
    return 0;
}
