#include <iostream>
#include "game.h"

Game::Game(const std::vector<std::string>& categories, const std::vector<std::vector<int>>& points)
    : board_(categories, points) {}  // Initialize board using the passed categories and points

void Game::start() {
    board_.printBoard();

    // Add game loop, user input, scoring logic here
}
