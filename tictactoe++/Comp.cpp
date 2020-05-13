#include "Comp.h"
int Comp::minimax(char board[3][3], int depth, bool isMax)
{
		int score = evaluate(board,player,opponent);

	if (score == 10)
		return score;

	if (score == -10)
		return score;

	if (isMovesLeft(board)==false)
		return 0;

	if (isMax)
	{
		int best = -1000;

		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<3; j++)
			{

				if (board[i][j]=='_')
				{

					board[i][j] = player;

					best = max( best,
						minimax(board, depth+1, !isMax) );


					board[i][j] = '_';
				}
			}
		}
		return best;
	}


	else
	{
		int best = 1000;


		for (int i = 0; i<3; i++)
		{
			for (int j = 0; j<3; j++)
			{

				if (board[i][j]=='_')
				{

					board[i][j] = opponent;


					best = min(best,
						minimax(board, depth+1, !isMax));

					board[i][j] = '_';
				}
			}
		}
		return best;
	}
}

int Comp::findBestMove(sf::RenderWindow &window ,  char board[3][3])
{
    int i_pos ;int j_pos;
	int bestVal = -1000;

	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j<3; j++)
		{

			if (board[i][j]=='_')
			{

				board[i][j] = player;

				int moveVal = minimax(board, 0, false);

				board[i][j] = '_';

				if (moveVal > bestVal)
				{
					i_pos = i;
					j_pos = j;
					bestVal = moveVal;
				}
			}
		}
	}
if (i_pos == 0){
        if (j_pos == 0){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",35,95);
            }
        if(j_pos == 1){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",195,95);
            }
        if(j_pos == 2){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",355,95);
            }
}
    if(i_pos == 1){
        if(j_pos == 0){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",35,255);
            }
        if(j_pos == 1){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",195,255);
    }
        if(j_pos == 2){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",355,255);
            }
    }
if (i_pos == 2){
    if(j_pos == 0){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",35,415);
            }
        if(j_pos == 1){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",195,415);
            }
        if(j_pos == 2){
            board[i_pos][j_pos] = 'x';
            Game::human_sign(window,"X.png",355,415);
            }
}

}




Comp::Comp()
{
    //ctor
}

Comp::~Comp()
{
    //dtor
}
