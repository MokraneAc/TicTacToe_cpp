#ifndef GAME_H
#define GAME_H

#include<iostream>
#include<SFML/Graphics.hpp>
#include<string>

using namespace std;


class Game
{
    private:
        sf::Texture texture1;
        sf::Texture texture2;
        sf::Texture texture3;
        sf::Image yellow;
        sf::Image logo;
        sf::Image play;
        sf::Sprite sprite1;
        sf::Sprite sprite2;
        sf::Sprite sprite3;

    public:
        void gamestart(sf::RenderWindow &window, string path,string path1 ,string path2);
        void drawgrid(sf::RenderWindow &window,string path);
        void winner_drawc(sf::RenderWindow &window,string path2,int var1,int var2,int var3,int var4);
        void winner_drawl(sf::RenderWindow &window,string path2,int var1,int var2,int var3,int var4);
        void winner_drawD(sf::RenderWindow &window,string path2);
        void winner_drawAD(sf::RenderWindow &window,string path2);
        void human_sign(sf::RenderWindow &window,string path2,int var1,int var2);
        void check_end(sf::RenderWindow &window ,string path);



        Game();
        virtual ~Game();

};

#endif // GAME_H
