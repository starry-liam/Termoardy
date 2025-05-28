#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include <string>

// A class to handle the display and manipulation of the Jeopardy board
class Board {

private:
    
public:
    Board(const std::vector<std::string>& categories, const std::vector<std::vector<int>>& points);
    void printBoard() const;
    std::vector<std::string> categories_;
    std::vector<std::vector<int>> points_;
    const int cellWidth = 10;  // Width of each cell (including category/points)

};

#endif // BOARD_H
