//
// Created by justi on 3/2/2023.
//

#include <iostream>
#include "SudokuSolverTest.h"

bool SudokuSolverTest::compare(const int grid[9][9]) {
    const int result[9][9] = {
            {4, 8, 3, 9, 2, 1, 6, 5, 7},
            {9, 6, 7, 3, 4, 5, 8, 2, 1},
            {2, 5, 1, 8, 7, 6, 4, 9, 3},
            {5, 4, 8, 1, 3, 2, 9, 7, 6},
            {7, 2, 9, 5, 6, 4, 1, 3, 8},
            {1, 3, 6, 7, 9, 8, 2, 4, 5},
            {3, 7, 2, 6, 8, 9, 5, 1, 4},
            {8, 1, 4, 2, 5, 3, 7, 6, 9},
            {6, 9, 5, 4, 1, 7, 3, 8, 2}
    };

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (grid[i][j] != result[i][j]) {
                throw SudokuSolveFailedException(build_failed_test_message(i, j));
            }
        }
    }
    return true;
}

std::string SudokuSolverTest::build_failed_test_message(const int& row, const int& col) {
    return std::string("TEST FAILED \n AT ROW: " + std::to_string(row + 1) + " COL: " + std::to_string(col + 1) + '\n');
}
