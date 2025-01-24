#include <iostream>
#include <SFML/Graphics.hpp>

#include "Header/Core/GameWindowManager.h"

#include "Header/Event/EventManager.h"

int main() {
    // Create our window manager instance
    Core::GameWindowManager gameWindowManager;

    //Create an object of event manager
    //Event::EventManager eventManager;


    // Initialize the window
    gameWindowManager.initialize();

    while (gameWindowManager.isGameRunning()) 
    {
        gameWindowManager.render();
    }

    return 0;
}