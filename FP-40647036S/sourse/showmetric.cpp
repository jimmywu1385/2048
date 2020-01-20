#include"showmetric.hpp"
#include<stdio.h>
showmetric::showmetric()
{
    if(!qt0.loadFromFile("image/tt0.png"))
    {

    }
    if(!qt1.loadFromFile("image/tt1.png"))
    {

    }
    if(!qt2.loadFromFile("image/tt2.png"))
    {

    }
    if(!qt3.loadFromFile("image/tt3.png"))
    {

    }
    if(!qt4.loadFromFile("image/tt4.png"))
    {

    }
    if(!qt5.loadFromFile("image/tt5.png"))
    {

    }
    if(!qt6.loadFromFile("image/tt6.png"))
    {

    }
    if(!qt7.loadFromFile("image/tt7.png"))
    {

    }
    if(!qt8.loadFromFile("image/tt8.png"))
    {

    }
    if(!qt9.loadFromFile("image/tt9.png"))
    {

    }
     if(!qt10.loadFromFile("image/tt10.png"))
    {

    }
    if(!b1.loadFromFile("image/background.png"))
    {

    }

}
void showmetric::draw(sf::RenderWindow &window,int z[])
{

    int i=*z;
    switch(i)
    {
    case 0:
        qs1.setTexture(qt0);
        break;
    case 1:
        qs1.setTexture(qt1);
        break;
    case 2:
        qs1.setTexture(qt2);
        break;
    case 4:
        qs1.setTexture(qt3);
        break;
    case 8:
        qs1.setTexture(qt4);
        break;
    case 16:
        qs1.setTexture(qt5);
        break;
    case 32:
        qs1.setTexture(qt6);
        break;
    case 64:
        qs1.setTexture(qt7);
        break;
    case 128:
        qs1.setTexture(qt8);
        break;
    case 256:
        qs1.setTexture(qt9);
        break;
    case 512:
        qs1.setTexture(qt10);
        break;
    }
    i=*(z+1);
    switch(i)
    {
    case 0:
        qs2.setTexture(qt0);
        break;
    case 1:
        qs2.setTexture(qt1);
        break;
    case 2:
        qs2.setTexture(qt2);
        break;
    case 4:
        qs2.setTexture(qt3);
        break;
    case 8:
        qs2.setTexture(qt4);
        break;
    case 16:
        qs2.setTexture(qt5);
        break;
    case 32:
        qs2.setTexture(qt6);
        break;
    case 64:
        qs2.setTexture(qt7);
        break;
    case 128:
        qs2.setTexture(qt8);
        break;
    case 256:
        qs2.setTexture(qt9);
        break;
         case 512:
        qs2.setTexture(qt10);
        break;
    }
    i=*(z+2);
    switch(i)
    {
    case 0:
        qs3.setTexture(qt0);
        break;
    case 1:
        qs3.setTexture(qt1);
        break;
    case 2:
        qs3.setTexture(qt2);
        break;
    case 4:
        qs3.setTexture(qt3);
        break;
    case 8:
        qs3.setTexture(qt4);
        break;
    case 16:
        qs3.setTexture(qt5);
        break;
    case 32:
        qs3.setTexture(qt6);
        break;
    case 64:
        qs3.setTexture(qt7);
        break;
    case 128:
        qs3.setTexture(qt8);
        break;
    case 256:
        qs3.setTexture(qt9);
        break;
         case 512:
        qs3.setTexture(qt10);
        break;
    }
    i=*(z+3);
    switch(i)
    {
    case 0:
        qs4.setTexture(qt0);
        break;
    case 1:
        qs4.setTexture(qt1);
        break;
    case 2:
        qs4.setTexture(qt2);
        break;
    case 4:
        qs4.setTexture(qt3);
        break;
    case 8:
        qs4.setTexture(qt4);
        break;
    case 16:
        qs4.setTexture(qt5);
        break;
    case 32:
        qs4.setTexture(qt6);
        break;
    case 64:
        qs4.setTexture(qt7);
        break;
    case 128:
        qs4.setTexture(qt8);
        break;
    case 256:
        qs4.setTexture(qt9);
        break;
         case 512:
        qs4.setTexture(qt10);
        break;
    }
    i=*(z+4);
    switch(i)
    {
    case 0:
        qs5.setTexture(qt0);
        break;
    case 1:
        qs5.setTexture(qt1);
        break;
    case 2:
        qs5.setTexture(qt2);
        break;
    case 4:
        qs5.setTexture(qt3);
        break;
    case 8:
        qs5.setTexture(qt4);
        break;
    case 16:
        qs5.setTexture(qt5);
        break;
    case 32:
        qs5.setTexture(qt6);
        break;
    case 64:
        qs5.setTexture(qt7);
        break;
    case 128:
        qs5.setTexture(qt8);
        break;
    case 256:
        qs5.setTexture(qt9);
        break;
         case 512:
        qs5.setTexture(qt10);
        break;
    }
    i=*(z+5);
    switch(i)
    {
    case 0:
        qs6.setTexture(qt0);
        break;
    case 1:
        qs6.setTexture(qt1);
        break;
    case 2:
        qs6.setTexture(qt2);
        break;
    case 4:
        qs6.setTexture(qt3);
        break;
    case 8:
        qs6.setTexture(qt4);
        break;
    case 16:
        qs6.setTexture(qt5);
        break;
    case 32:
        qs6.setTexture(qt6);
        break;
    case 64:
        qs6.setTexture(qt7);
        break;
    case 128:
        qs6.setTexture(qt8);
        break;
    case 256:
        qs6.setTexture(qt9);
        break;
         case 512:
        qs6.setTexture(qt10);
        break;
    }
    i=*(z+6);
    switch(i)
    {
    case 0:
        qs7.setTexture(qt0);
        break;
    case 1:
        qs7.setTexture(qt1);
        break;
    case 2:
        qs7.setTexture(qt2);
        break;
    case 4:
        qs7.setTexture(qt3);
        break;
    case 8:
        qs7.setTexture(qt4);
        break;
    case 16:
        qs7.setTexture(qt5);
        break;
    case 32:
        qs7.setTexture(qt6);
        break;
    case 64:
        qs7.setTexture(qt7);
        break;
    case 128:
        qs7.setTexture(qt8);
        break;
    case 256:
        qs7.setTexture(qt9);
        break;
         case 512:
        qs7.setTexture(qt10);
        break;
    }
    i=*(z+7);
    switch(i)
    {
    case 0:
        qs8.setTexture(qt0);
        break;
    case 1:
        qs8.setTexture(qt1);
        break;
    case 2:
        qs8.setTexture(qt2);
        break;
    case 4:
        qs8.setTexture(qt3);
        break;
    case 8:
        qs8.setTexture(qt4);
        break;
    case 16:
        qs8.setTexture(qt5);
        break;
    case 32:
        qs8.setTexture(qt6);
        break;
    case 64:
        qs8.setTexture(qt7);
        break;
    case 128:
        qs8.setTexture(qt8);
        break;
    case 256:
        qs8.setTexture(qt9);
        break;
         case 512:
        qs8.setTexture(qt10);
        break;
    }
    i=*(z+8);
    switch(i)
    {
    case 0:
        qs9.setTexture(qt0);
        break;
    case 1:
        qs9.setTexture(qt1);
        break;
    case 2:
        qs9.setTexture(qt2);
        break;
    case 4:
        qs9.setTexture(qt3);
        break;
    case 8:
        qs9.setTexture(qt4);
        break;
    case 16:
        qs9.setTexture(qt5);
        break;
    case 32:
        qs9.setTexture(qt6);
        break;
    case 64:
        qs9.setTexture(qt7);
        break;
    case 128:
        qs9.setTexture(qt8);
        break;
    case 256:
        qs9.setTexture(qt9);
        break;
         case 512:
        qs9.setTexture(qt10);
        break;
    }
    i=*(z+9);
    switch(i)
    {
    case 0:
        qs10.setTexture(qt0);
        break;
    case 1:
        qs10.setTexture(qt1);
        break;
    case 2:
        qs10.setTexture(qt2);
        break;
    case 4:
        qs10.setTexture(qt3);
        break;
    case 8:
        qs10.setTexture(qt4);
        break;
    case 16:
        qs10.setTexture(qt5);
        break;
    case 32:
        qs10.setTexture(qt6);
        break;
    case 64:
        qs10.setTexture(qt7);
        break;
    case 128:
        qs10.setTexture(qt8);
        break;
    case 256:
        qs10.setTexture(qt9);
        break;
         case 512:
        qs10.setTexture(qt10);
        break;
    }
    i=*(z+10);
    switch(i)
    {
    case 0:
        qs11.setTexture(qt0);
        break;
    case 1:
        qs11.setTexture(qt1);
        break;
    case 2:
        qs11.setTexture(qt2);
        break;
    case 4:
        qs11.setTexture(qt3);
        break;
    case 8:
        qs11.setTexture(qt4);
        break;
    case 16:
        qs11.setTexture(qt5);
        break;
    case 32:
        qs11.setTexture(qt6);
        break;
    case 64:
        qs11.setTexture(qt7);
        break;
    case 128:
        qs11.setTexture(qt8);
        break;
    case 256:
        qs11.setTexture(qt9);
        break;
         case 512:
        qs11.setTexture(qt10);
        break;
    }
    i=*(z+11);
    switch(i)
    {
    case 0:
        qs12.setTexture(qt0);
        break;
    case 1:
        qs12.setTexture(qt1);
        break;
    case 2:
        qs12.setTexture(qt2);
        break;
    case 4:
        qs12.setTexture(qt3);
        break;
    case 8:
        qs12.setTexture(qt4);
        break;
    case 16:
        qs12.setTexture(qt5);
        break;
    case 32:
        qs12.setTexture(qt6);
        break;
    case 64:
        qs12.setTexture(qt7);
        break;
    case 128:
        qs12.setTexture(qt8);
        break;
    case 256:
        qs12.setTexture(qt9);
        break;
         case 512:
        qs12.setTexture(qt10);
        break;
    }
    i=*(z+12);
    switch(i)
    {
    case 0:
        qs13.setTexture(qt0);
        break;
    case 1:
        qs13.setTexture(qt1);
        break;
    case 2:
        qs13.setTexture(qt2);
        break;
    case 4:
        qs13.setTexture(qt3);
        break;
    case 8:
        qs13.setTexture(qt4);
        break;
    case 16:
        qs13.setTexture(qt5);
        break;
    case 32:
        qs13.setTexture(qt6);
        break;
    case 64:
        qs13.setTexture(qt7);
        break;
    case 128:
        qs13.setTexture(qt8);
        break;
    case 256:
        qs13.setTexture(qt9);
        break;
         case 512:
        qs13.setTexture(qt10);
        break;
    }
    i=*(z+13);
    switch(i)
    {
    case 0:
        qs14.setTexture(qt0);
        break;
    case 1:
        qs14.setTexture(qt1);
        break;
    case 2:
        qs14.setTexture(qt2);
        break;
    case 4:
        qs14.setTexture(qt3);
        break;
    case 8:
        qs14.setTexture(qt4);
        break;
    case 16:
        qs14.setTexture(qt5);
        break;
    case 32:
        qs14.setTexture(qt6);
        break;
    case 64:
        qs14.setTexture(qt7);
        break;
    case 128:
        qs14.setTexture(qt8);
        break;
    case 256:
        qs14.setTexture(qt9);
        break;
         case 512:
        qs14.setTexture(qt10);
        break;
    }
    i=*(z+14);
    switch(i)
    {
    case 0:
        qs15.setTexture(qt0);
        break;
    case 1:
        qs15.setTexture(qt1);
        break;
    case 2:
        qs15.setTexture(qt2);
        break;
    case 4:
        qs15.setTexture(qt3);
        break;
    case 8:
        qs15.setTexture(qt4);
        break;
    case 16:
        qs15.setTexture(qt5);
        break;
    case 32:
        qs15.setTexture(qt6);
        break;
    case 64:
        qs15.setTexture(qt7);
        break;
    case 128:
        qs15.setTexture(qt8);
        break;
    case 256:
        qs15.setTexture(qt9);
        break;
         case 512:
        qs15.setTexture(qt10);
        break;
    }
    i=*(z+15);
    switch(i)
    {
    case 0:
        qs16.setTexture(qt0);
        break;
    case 1:
        qs16.setTexture(qt1);
        break;
    case 2:
        qs16.setTexture(qt2);
        break;
    case 4:
        qs16.setTexture(qt3);
        break;
    case 8:
        qs16.setTexture(qt4);
        break;
    case 16:
        qs16.setTexture(qt5);
        break;
    case 32:
        qs16.setTexture(qt6);
        break;
    case 64:
        qs16.setTexture(qt7);
        break;
    case 128:
        qs16.setTexture(qt8);
        break;
    case 256:
        qs16.setTexture(qt9);
        break;
         case 512:
        qs16.setTexture(qt10);
        break;
    }
    qs1.setPosition(sf::Vector2f(10,10));
    qs2.setPosition(sf::Vector2f(165,10));
    qs3.setPosition(sf::Vector2f(315,10));
    qs4.setPosition(sf::Vector2f(470,10));
    qs5.setPosition(sf::Vector2f(10,143));
    qs6.setPosition(sf::Vector2f(165,143));
    qs7.setPosition(sf::Vector2f(315,143));
    qs8.setPosition(sf::Vector2f(470,143));
    qs9.setPosition(sf::Vector2f(10,276));
    qs10.setPosition(sf::Vector2f(165,276));
    qs11.setPosition(sf::Vector2f(315,276));
    qs12.setPosition(sf::Vector2f(470,276));
    qs13.setPosition(sf::Vector2f(10,408));
    qs14.setPosition(sf::Vector2f(165,408));
    qs15.setPosition(sf::Vector2f(315,408));
    qs16.setPosition(sf::Vector2f(470,408));
    bb.setTexture(b1);
    window.draw(bb);
    window.draw(qs1);
    window.draw(qs2);
    window.draw(qs3);
    window.draw(qs4);
    window.draw(qs5);
    window.draw(qs6);
    window.draw(qs7);
    window.draw(qs8);
    window.draw(qs9);
    window.draw(qs10);
    window.draw(qs11);
    window.draw(qs12);
    window.draw(qs13);
    window.draw(qs14);
    window.draw(qs15);
    window.draw(qs16);
}
