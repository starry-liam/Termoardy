#include <iostream>
#include "game.h"

Game::Game(const std::vector<std::string>& categories, const std::vector<std::vector<int>>& points)
    : board_(categories, points), categories_(categories), points_(points) {}  // Initialize board and store categories/points

void Game::start() {
    std::cout << "Welcome to Termoardy!\n";
    std::cout << "Here's your host, @Stars!\n";
    std::cout << "----------------------\n";
    std::cout << "Here's your categories:\n";
    std::cout << "----------------------\n";
    board_.printBoard();
    std::cout << "----------------------\n";
    std::cout << "Let's play!\n";
    std::cout << "Select a category and point value to answer a question.\n";
    std::cout << "----------------------\n";
        
        std::string userCategory;
        int userPoints;
        bool validCategory = false;
        bool validPoints = false;

        // Keep asking until valid category is entered
        while (!validCategory) {
            std::cout << "Please enter a category (History, Science, Math, Literature, Geography): ";
            std::getline(std::cin, userCategory);

            // Check if the entered category exists
            for (const auto& category : this->categories_) {
                if (category == userCategory) {
                    validCategory = true;
                    break;
                }
            }

            if (!validCategory) {
                std::cout << "Invalid category! Please try again." << std::endl;
            }
        }

        // Keep asking until valid points are entered
        while (!validPoints) {
            std::cout << "Please enter a point value (100, 200, 300, 400): ";
            std::cin >> userPoints;

            // Check if the entered points are valid
            for (int point : points_[0]) { // Assuming all categories have the same point values
                if (point == userPoints) {
                    validPoints = true;
                    break;
                }
            }

            if (!validPoints) {
                std::cout << "Invalid point value! Please try again." << std::endl;
            }
        }

        std::cout << "You selected category: " << userCategory << " with " << userPoints << " points!" << std::endl;
}
 // Add game loop, user input, scoring logic here
