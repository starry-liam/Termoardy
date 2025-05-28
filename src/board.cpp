#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include "board.h"

Board::Board(const std::vector<std::string>& categories, const std::vector<std::vector<int>>& points)
    : categories_(categories), points_(points) {}

void Board::printBoard() const {
    const int cellWidth = 15;  // Width of each cell (including category/points)

    // Print the top border
    std::cout << "+";
    for (size_t i = 0; i < categories_.size(); ++i) {
        std::cout << std::setw(cellWidth) << std::setfill('-') << "+"; // Category divider
    }
    std::cout << "\n";

    // Print the categories
    std::cout << "|";
    for (size_t i = 0; i < categories_.size(); ++i) {
        std::cout << std::setw(cellWidth - 1) << std::setfill(' ') << categories_[i] << "|";
    }
    std::cout << "\n";

    // Print the point rows
    for (size_t row = 0; row < points_[0].size(); ++row) {
        std::cout << "+";
        for (size_t i = 0; i < categories_.size(); ++i) {
            std::cout << std::setw(cellWidth) << std::setfill('-') << "+"; // Row divider
        }
        std::cout << "\n";

        std::cout << "|";
        for (size_t col = 0; col < categories_.size(); ++col) {
            std::cout << std::setw(cellWidth - 5) << std::setfill(' ') << "[" << points_[col][row] << "]" << "|";
        }
        std::cout << "\n";
    }

    // Print the bottom border
    std::cout << "+";
    for (size_t i = 0; i < categories_.size(); ++i) {
        std::cout << std::setw(cellWidth) << std::setfill('-') << "+"; // Category divider
    }
    std::cout << "\n";
}

