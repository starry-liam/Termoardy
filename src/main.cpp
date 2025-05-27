#include <iostream>
#include "board.h"  // For displaying the board (we'll add this next)

int main() {
    std::cout << "Welcome to Termoardy!\n";
    std::cout << "----------------------\n";
    
    // Initialize the game
    Game game;
    game.loadQuestions("examples/questions.txt"); // Load questions from file
    game.displayBoard();  // Display the board in the terminal

    return 0;
}