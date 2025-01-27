#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;
#include "../../Header/Gameplay/BALL/Ball.h"
#include "../../Header/Gameplay/PADDLE/Paddle.h"

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
	};


}
