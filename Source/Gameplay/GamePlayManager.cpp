#include "../../Header/Gameplay/GamePlayManager.h"


namespace Gameplay 
{
	GamePlayManager::GamePlayManager(EventManager* Event_manager)
	 {
		time_service = new TimeService();
		time_service->initialize();// Start our time tracking
		event_manager = Event_manager;
		boundary = new Boundary();
		//ui_service = new UIService;
	}


	void GamePlayManager::initialize() 
	{
		
		ball = new Ball();
		player1 = new Paddle(player1_position_x, player1_position_y);
		player2 = new Paddle(player2_postion_x, player2_postion_y);
	}

	void GamePlayManager::render(RenderWindow* game_window)
	{
		boundary->render(game_window);
		ball->render(game_window);
		player1->render(game_window);
		player2->render(game_window);
		ui_service->render(game_window);
	}
	void GamePlayManager::update()
	{
		time_service->update();

		ball->update(player1, player2, time_service);

		player1->update(event_manager->isKeyPressed(Keyboard::W),event_manager->isKeyPressed(Keyboard::S), time_service);
		
		player2->update(event_manager->isKeyPressed(Keyboard::Up),event_manager->isKeyPressed(Keyboard::Down), time_service);

	}


}

