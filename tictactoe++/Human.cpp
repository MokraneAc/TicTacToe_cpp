#include "Human.h"

bool Human::human_move(sf::RenderWindow &window , string path2 ,char board[3][3] ,char opponent){
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad7)){
if (board[0][0] == '_'){
board[0][0] = opponent;
Game::human_sign(window,"O.png",35,95);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad4)){
if (board[1][0] == '_'){
board[1][0] = opponent;
Game::human_sign(window,"O.png",35,255);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1)){
if (board[2][0] == '_'){
board[2][0] = opponent;
Game::human_sign(window,"O.png",35,415);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad8)){
if (board[0][1] == '_'){
board[0][1] = opponent;
Game::human_sign(window,"O.png",195,95);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad9)){
if (board[0][2] == '_'){
board[0][2] = opponent;
Game::human_sign(window,"O.png",355,95);
sprite.setPosition(355,95);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad5)){
if (board[1][1] == '_'){
board[1][1] = opponent;
Game::human_sign(window,"O.png",195,255);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad6)){
        if (board[1][2] == '_'){
board[1][2] = opponent;
Game::human_sign(window,"O.png",355,255);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2)){
        if (board[2][1] == '_'){
board[2][1] = opponent;
Game::human_sign(window,"O.png",195,415);
return true;}
}
if(sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad3)){
        if (board[2][2] == '_'){
board[2][2] = opponent;
Game::human_sign(window,"O.png",355,415);
return true;}
}
}



Human::Human()
{
    //ctor
}

Human::~Human()
{
    //dtor
}
