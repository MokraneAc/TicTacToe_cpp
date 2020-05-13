#ifndef LOGIC_H
#define LOGIC_H
#include "Game.h"


class Logic: public Game
{
    public:
    ////variables
    char player = 'x';
    char opponent ='o';
    //functions
    bool isMovesLeft(char board[3][3]);
    int  Winner(char board[3][3]);
    int evaluate(char board[3][3] , char player,char opponent);
    int game_over(sf::RenderWindow &window ,char board[3][3]);
    bool retry(sf::RenderWindow &window,char board[3][3]);
    void init(char board[3][3]);
    ///deafult
    Logic();
    virtual ~Logic();
};

#endif // LOGIC_H
