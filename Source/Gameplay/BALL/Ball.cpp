#include "../../../Header/Gameplay/BALL/Ball.h"

using namespace sf;



namespace Gameplay
{
    namespace BALL 
    {

        Ball::Ball()
        {
            ball_sprite.setRadius(radius);
            ball_sprite.setPosition(position_x, position_y);
        }

        void Ball::render(RenderWindow* game_window)
        {
            game_window->draw(ball_sprite);
        }

    }
   
        

}
