#include "Logic.h"
bool Logic::isMovesLeft(char board[3][3])
{
	for (int i = 0; i<3; i++)
		for (int j = 0; j<3; j++)
			if (board[i][j]=='_')
				return true;
	return false;
}


int Logic::game_over(sf::RenderWindow &window ,char board[3][3]){
string path2;
char result = evaluate(board,player,opponent);
    if (result == +10){
            path2 ="Xwin.png";
        Game::drawgrid(window,"red.png");
            if (Winner(board) == 1){
    Game::winner_drawc(window,path2,35,195,355,95);
            }
      if (Winner(board) == 2){
Game::winner_drawc(window,path2,35,195,355,255);
            }
          if (Winner(board) == 3){
Game::winner_drawc(window,path2,35,195,355,412);
            }

    if (Winner(board) == 4){
Game::winner_drawl(window,path2,95,255,412,35);
            }

      if (Winner(board) == 5){
Game::winner_drawl(window,path2,95,255,412,195);
}

    if (Winner(board) == 6){
Game::winner_drawl(window,path2,95,255,412,355);}

if (Winner(board) == 7){

Game::winner_drawD(window,path2);}

    if (Winner(board) == 8){
Game::winner_drawAD(window,path2);}
}
if (result == -10){
                path2 ="Owin.png";
        Game::drawgrid(window,"green.png");
            if (Winner(board) == 1){
    Game::winner_drawc(window,path2,35,195,355,95);
            }
      if (Winner(board) == 2){
Game::winner_drawc(window,path2,35,195,355,255);
            }
          if (Winner(board) == 3){
Game::winner_drawc(window,path2,35,195,355,412);
            }

    if (Winner(board) == 4){
Game::winner_drawl(window,path2,95,255,412,35);
            }

      if (Winner(board) == 5){
Game::winner_drawl(window,path2,95,255,412,195);
}

    if (Winner(board) == 6){
Game::winner_drawl(window,path2,95,255,412,355);}

if (Winner(board) == 7){

Game::winner_drawD(window,path2);}

    if (Winner(board) == 8){
Game::winner_drawAD(window,path2);}
}

}


int  Logic::Winner(char matrix[3][3])
{
	if(matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] == 'x')
		return 1;
	if(matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x')
		return 2;
	if(matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] == 'x')
		return 3;
	if(matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] == 'x')
		return 4;
	if(matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] == 'x')
		return 5;
	if(matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] == 'x')
		return 6;
	if(matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x')
		return 7;
	if(matrix[0][2] == 'x' && matrix[1][1] == 'x' && matrix[2][0] == 'x')
		return 8;

	if(matrix[0][0] == 'o' && matrix[0][1] == 'o' && matrix[0][2] == 'o')
		return 1;
	if(matrix[1][0] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o')
		return 2;
	if(matrix[2][0] == 'o' && matrix[2][1] == 'o' && matrix[2][2] == 'o')
		return 3;
	if(matrix[0][0] == 'o' && matrix[1][0] == 'o' && matrix[2][0] == 'o')
		return 4;
	if(matrix[0][1] == 'o' && matrix[1][1] == 'o' && matrix[2][1] == 'o')
		return 5;
	if(matrix[0][2] == 'o' && matrix[1][2] == 'o' && matrix[2][2] == 'o')
		return 6;
	if(matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o')
		return 7;
	if(matrix[0][2] == 'o' && matrix[1][1] == 'o' && matrix[2][0] == 'o')
		return 8;


	return '/';

}

int Logic::evaluate(char b[3][3] , char player ,char opponent)
{
	for (int row = 0; row<3; row++)
	{
		if (b[row][0]==b[row][1] &&
			b[row][1]==b[row][2])
		{
			if (b[row][0]==player)
				return +10;
			else if (b[row][0]==opponent)
				return -10;
		}
	}
	for (int col = 0; col<3; col++)
	{
		if (b[0][col]==b[1][col] &&
			b[1][col]==b[2][col])
		{
			if (b[0][col]==player)
				return +10;

			else if (b[0][col]==opponent)
				return -10;
		}
	}

	// Checking for Diagonals for X or O victory.
	if (b[0][0]==b[1][1] && b[1][1]==b[2][2])
	{
		if (b[0][0]==player)
			return +10;
		else if (b[0][0]==opponent)
			return -10;
	}

	if (b[0][2]==b[1][1] && b[1][1]==b[2][0])
	{
		if (b[0][2]==player)
			return +10;
		else if (b[0][2]==opponent)
			return -10;
	}

	return 0;
}

bool Logic::retry(sf::RenderWindow &window,char board[3][3]){
if (Logic::isMovesLeft(board) == false){
    Game::check_end(window ,"background.png");
    return true;
}
if ( Logic::evaluate(board,player,opponent)== +10){
    Game::check_end(window ,"red.png");
    return true;
}
if ( Logic::evaluate(board,player,opponent)== -10){
    Game::check_end(window ,"green.png");
    return true;
}

}

void Logic::init(char board[3][3]){
for (int i = 0;i<3;i++){
 for (int j = 0;j<3;j++){
    board[i][j] = '_';
 }
}
}

Logic::Logic()
{
    //ctor
}

Logic::~Logic()
{
    //dtor
}
