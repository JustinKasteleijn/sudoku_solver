//
// Created by justi on 3/2/2023.
//
#include <string>
#include <iostream>
#include "SudokuFactory.h"
#include "FileUtils.h"

void SudokuFactory::get_sudoku(int grid[9][9]) {
    std::vector<std::string> from_file = FileUtils::parseFile("sudoku_data.txt");
    from_file.erase(from_file.begin());
    for (int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            grid[i][j] = from_file.at(i).at(j) - '0';
        }
    }
}
