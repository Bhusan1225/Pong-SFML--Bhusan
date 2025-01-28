#pragma once
#include <SFML/Graphics.hpp>


#include "../../Header/Gameplay/BALL/Ball.h"
#include "../../Header/Gameplay/PADDLE/Paddle.h"

#include "../../Header/Gameplay/Boundary/Boundary.h"
#include "../../Header/Event/EventManager.h"


using namespace Event;
//using namespace PADDLE;
//using namespace Boundary;

namespace Gameplay
{

	class GamePlayManager
	{
	private:
		float player1_position_x = 40.0f;
		float player1_position_y = 300.0f;

		float player2_postion_x = 1210.0f;
		float player2_postion_y = 300.0f;

		Ball* ball;
		Paddle* player1;
		Paddle* player2;
		EventManager* event_manager;
		Boundary* boundary;

	public:
		void initialize();
		GamePlayManager(EventManager* event);
		void update();
		void render(RenderWindow* game_window);
		
	};


}
