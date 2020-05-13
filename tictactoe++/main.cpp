#include<SFML/Graphics.hpp>
#include "Game.h"
#include "Human.h"
#include "Logic.h"
#include "Comp.h"
#include <iostream>
#include <unistd.h>


using namespace std;
    char opponent = 'o';
        char player = 'x';
        char board[3][3] = {
		{ '_', '_', '_' },
		{ '_', '_', '_' },
		{ '_', '_', '_' }
	};


int main(){

bool known;
int temps = 0;
int i = 0;

sf::Clock clock;

///objects

Game app;
Comp ia;
Human etre;
Logic logique;
///// begin
sf::RenderWindow window(sf::VideoMode(550,650) ,"tictactoe");
while(window.isOpen()){

    sf::Event event;
    while(window.pollEvent(event)){

        if (event.type == sf::Event::Closed)
            window.close();
    }

while(i == 0){
    app.gamestart(window,"background.png","gametitle.png","play.png");
    sf::Time  elapsed1 = clock.getElapsedTime();
if (elapsed1.asSeconds() >= 4 ){
    temps = 10;
    app.drawgrid(window,"background.png");
    ia.findBestMove(window,board);
    break;
}
if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)){
    temps = -10;
    app.drawgrid(window,"background.png");
    break;
}
}
i = 1;



if (temps == -10){
if (etre.human_move(window,"O.png",board,opponent) == true){
if (logique.evaluate(board,player,opponent) == +10 || logique.evaluate(board,player,opponent) == -10){
            logique.game_over(window,board);
            sleep(1);
            if (logique.isMovesLeft(board) == false){
            sleep(1);
            }
}
        sleep(1);
        ia.findBestMove(window,board);
if (logique.evaluate(board,player,opponent) == +10 || logique.evaluate(board,player,opponent) == -10){
            logique.game_over(window,board);
            sleep(1);
            if (logique.isMovesLeft(board) == false){
            sleep(1);
            }
}
}
}

if (temps == 10){
if (etre.human_move(window,"O.png",board,opponent) == true){
if (logique.evaluate(board,player,opponent) == +10 || logique.evaluate(board,player,opponent) == -10){
            logique.game_over(window,board);
            sleep(1);
            if (logique.isMovesLeft(board) == false){
            sleep(1);
            }
}
        sleep(1);
        ia.findBestMove(window,board);
if (logique.evaluate(board,player,opponent) == +10 || logique.evaluate(board,player,opponent) == -10){
            logique.game_over(window,board);
            sleep(1);
            if (logique.isMovesLeft(board) == false){
            sleep(1);
            }
}
}
}





known = logique.retry(window,board);
while (known == true){
 while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)){
    logique.init(board);
clock.restart();
i = 0;
break;
}
}

}



return 0;
}
