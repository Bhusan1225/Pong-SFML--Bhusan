#include "../../Header/Gameplay/GamePlayManager.h"

using namespace sf;


namespace Gameplay 
{
	GamePlayManager::GamePlayManager() 
	 {
		initialize();
	}

	void GamePlayManager::initialize() 
	
	{
		ball = new Ball();
		player1 = new Paddle(player1_position_x, player1_position_y);
		player2 = new Paddle(player2_postion_x, player2_postion_y);
	}

	void GamePlayManager::render(RenderWindow* game_window)
	{
		ball->render(game_window);
		player1->render(game_window);
		player2->render(game_window);
	}


}