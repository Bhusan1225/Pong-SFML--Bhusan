#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

#include "../../Header/Utility/TimeService.h"
using namespace Utility;
namespace Gameplay

{
  

        class Paddle

        {
        private:
            const float paddleSpeed = 0.5f;
            RectangleShape paddle_sprite;

            const float paddle_width = 20.0f;
            const float paddle_height = 140.0f;

            float topBoundary = 20.0f;
            float bottomBoundary = 700.0f;

            int speedMultiplier = 1000;

            TimeService* time_service;

        public:
            Paddle(float position_x, float position_y);
            void update(bool move_up_key_pressed, bool move_down_key_pressed, TimeService* time_service);
            void render(RenderWindow* game_window);
            
            RectangleShape getPaddleSprite();
            void reset(float position_x, float position_y);

        private:
           // void createPaddle(float position_x, float position_y);
            void movePaddle(bool move_up_key_pressed, bool move_down_key_pressed, TimeService* time_service);
        
            
        };
    
   

}
