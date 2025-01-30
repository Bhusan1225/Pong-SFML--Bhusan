#pragma once
#include <SFML/Graphics.hpp>

#include "../../Header/Gameplay/PADDLE/Paddle.h"
#include "../../Header/Utility/TimeService.h"

using namespace sf;
using namespace std;
using namespace Utility;

namespace Gameplay

{
	enum class BallState
	{
		Idle,
		Moving
	};
	
		class Ball
		{
		private:
			Texture pong_ball_texture;
			Sprite pong_ball_sprite;
			string texture_path = "Assets/Textures/Ball.png";
			
			const float scale_x = 0.06f; 
			const float scale_y = 0.06f; 

			Paddle* player1;
			Paddle* player2;
			TimeService* time_service;

			const float position_x = 615.0f;
			const float position_y = 335.0f;

			void loadTexture();
			void initializeVariables();

			//ball
			float ball_speed = 0.5f;
			Vector2f velocity = Vector2f(ball_speed, ball_speed);
			float speed_multiplier = 900;


			//boundry
			const float top_boundary = 20.0f;
			const float bottom_boundary = 700.0f;
			const float left_boundary = 0.0f;
			const float right_boundary = 1280.0f;

			//hitting boundary
			bool had_left_collison = false;
			bool had_right_collison = false;

			//Center Position
			const float center_position_x = 615.0f;
			const float center_position_y = 325.0f;

			//delaying the ball when game starts
			float delay_duration = 2.0f;
			BallState current_state = BallState::Idle; // Initialize the ball's state
			float elapsed_delay_time = 0.0f;

			void move(TimeService* timeService);
			void updateDelayTime(float deltaTime);

		public:
			Ball();
			void update(Paddle* player1, Paddle* player2, TimeService* time_service);
			void render(RenderWindow* game_window);

			bool isLeftCollisionOccurred();
			void updateLeftCollisionState(bool value);

			bool isRightCollisionOccurred();
			void updateRightCollisionState(bool value);


		private:
			
			void handlePaddleCollision(Paddle* player1, Paddle* player2);
			void handleBoudaryCollision();
			void handleOutofBoundCollision();
			void reset();
			void onCollision(Paddle* player1, Paddle* player2);
			

		};

	

}

