#include "../../Header/Gameplay/GamePlayManager.h"




namespace Gameplay 
{
	GamePlayManager::GamePlayManager(EventManager* Event_manager)
	 {
		event_manager = Event_manager;
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
	void GamePlayManager::update()
	{
		
		player1->update(event_manager->isKeyPressed(Keyboard::W),event_manager->isKeyPressed(Keyboard::S));
		
		player2->update(event_manager->isKeyPressed(Keyboard::Up),event_manager->isKeyPressed(Keyboard::Down));
	}


}