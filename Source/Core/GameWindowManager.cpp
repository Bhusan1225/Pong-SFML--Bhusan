#include "../../Header/Core/GameWindowManager.h"

//using namespace sf;
namespace Core
{
    void GameWindowManager::initialize() 
    {
        // Allocate memory for the render window object
        game_window = new RenderWindow();
        // Set up the window with configured properties
        createGameWindow();
    }

    void GameWindowManager::createGameWindow() 
    {
        // Create the window with specified dimensions and title
        game_window->create(sf::VideoMode(game_window_width, game_window_height), game_title);

        //game_window->create(
        //    sf::VideoMode::getDesktopMode(),    // Get screen resolution
        //    game_title,                        // Window title
        //    sf::Style::Fullscreen);             // Fullscreen mode
    }

    bool GameWindowManager::isGameRunning() 
    {
        // Return true if window is open, false if closed
        return game_window->isOpen();
    }

    void GameWindowManager::clearGameWindow()
    {
        return game_window->clear();
    }

    void GameWindowManager::displayGameWindow()
    {
        return game_window->display();
    }

    RenderWindow* GameWindowManager::getGameWindow() 
    {
        //this will return the originally rendered game window.
        return game_window;
    }
}