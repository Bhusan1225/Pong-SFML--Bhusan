#include <iostream>
using namespace std;

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

            if (isLeftMouseButtonClicked())
            {
                sf::Vector2i position = sf::Mouse::getPosition(*game_window);

                // Log the mouse position
                std::cout << "Left mouse click at: " << position.x << ", " << position.y << std::endl;
            }
        }
        

    }

    bool EventManager::isKeyPressed(sf::Keyboard::Key key) //this is made by us 
    {
        // Detect if a specific key is pressed
        return sf::Keyboard::isKeyPressed(key); // this is existing function in keyboard
    }

    bool EventManager::isLeftMouseButtonClicked()
    {
        // Detect if the left mouse button is clicked
        return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
    }
}

