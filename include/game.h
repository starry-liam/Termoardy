#ifndef GAME_H
#define GAME_H

#include "board.h"
#include <string>

class Game {
public:
    Game(const std::vector<std::string>& categories, const std::vector<std::vector<int>>& points);
    void start();
    //void loadQuestions(const std::string& filename);
    //void displayBoard();

private:
    Board board_;
    std::vector<std::string> categories_;
    std::vector<std::vector<int>> points_;
};

#endif // GAME_H
