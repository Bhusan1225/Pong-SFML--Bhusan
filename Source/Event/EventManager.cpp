

#include "../../Header/Event/EventManager.h"

namespace Event
{

    void EventManager::pollEvents(RenderWindow* game_window) //see the spelling carefully it is pollEvent(s) this is made by us
    {
        sf::Event event;
        while (game_window->pollEvent(event)) //this pollEvent is a function in RenderWindow that needs a event parameter in it
        {
            // Handle window close event
            if (event.type == sf::Event::Closed) 
            {
                game_window->close();
            }

            if (isKeyPressed(sf::Keyboard::Escape)) 
            {
                game_window->close();
            }
        }

    }

    bool EventManager::isKeyPressed(sf::Keyboard::Key key) //this is made by us 
    {
        // Detect if a specific key is pressed
        return sf::Keyboard::isKeyPressed(key); // this is existing function in keyboard
    }
}
