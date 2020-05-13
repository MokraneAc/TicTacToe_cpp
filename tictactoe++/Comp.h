#ifndef COMP_H
#define COMP_H
//#include "Game.h"
#include "Logic.h"

class Comp: public Logic
{

    public:
    ///variable
    char player = 'x';
    char opponent = 'o';
    ////functions
    int minimax(char board[3][3], int depth, bool isMax);
    int findBestMove(sf::RenderWindow &window ,  char board[3][3]);
    /// default
    Comp();
    virtual ~Comp();
};

#endif // COMP_H
