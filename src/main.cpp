#include <iostream>
#include "game.h"   // For the game logic

int main() {
    
    // Initialize the game
    //game.loadQuestions("examples/questions.txt"); // Load questions from file
    std::vector<std::string> categories = {"History", "Science", "Math", "Literature", "Geography"};

    // Points grid: Each column corresponds to a category and each row corresponds to a point value.
    std::vector<std::vector<int>> points = {
        {100, 200, 300, 400},  // History
        {100, 200, 300, 400},  // Science
        {100, 200, 300, 400},  // Math
        {100, 200, 300, 400},   // Literature
        {100, 200, 300, 400}    // Geography
    };

    // Create the Game object and start the game
    Game game(categories, points);
    
    game.start(); // Display the board in the terminal

    

    return 0;
}