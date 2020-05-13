#ifndef HUMAN_H
#define HUMAN_H
#include "Game.h"

class Human: public Game
{
private:
    ///varibles
    sf::Image humain;
    sf::Texture texture;
    sf::Sprite sprite;
    ///functions
    public:
    bool human_move(sf::RenderWindow &window ,string path2, char board[3][3], char opponent);
    ///default
    Human();
    virtual ~Human();


};

#endif // HUMAN_H
